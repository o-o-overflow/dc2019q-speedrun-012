#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

#include "duktape.h"

/*
 * gcc -o speedrun-012 -O3 -pie speedrun-012.c duktape/dist/duktape.c -I duktape/dist/ -lm  
 */

static duk_ret_t native_print(duk_context *ctx) {
	duk_push_string(ctx, " ");
	duk_insert(ctx, 0);
	duk_join(ctx, duk_get_top(ctx) - 1);
	printf("%s\n", duk_safe_to_string(ctx, -1));
	return 0;
}

static duk_ret_t native_system(duk_context *ctx) {
	duk_push_string(ctx, " ");
	duk_insert(ctx, 0);
	duk_join(ctx, duk_get_top(ctx) - 1);
	system(duk_safe_to_string(ctx, -1));
	return 0;
}


static void fatal_error(void *udata, const char *msg) {
    (void) udata;  /* ignored in this case, silence warning */

    /* Note that 'msg' may be NULL. */
    fprintf(stderr, "*** FATAL ERROR: %s\n", (msg ? msg : "no message"));
    fflush(stderr);
    abort();   
}



int main(int argc, char *argv[]) {
   char buf[1024];

   setvbuf(stdout, NULL, _IONBF, 0);

   duk_context *ctx = duk_create_heap(NULL, NULL, NULL, NULL, fatal_error);

   (void) argc; (void) argv;  /* suppress warning */

   duk_push_c_function(ctx, native_print, DUK_VARARGS);
   duk_put_global_string(ctx, "print");
   
   if (getenv("DEBUG") == NULL)
   {
	  alarm(5);
	  duk_push_c_function(ctx, native_system, DUK_VARARGS);
	  duk_put_global_string(ctx, "system");
   }

   
   memset(buf, '\0', 1024);

   read(0, buf, 1023);
   
   duk_eval_string(ctx, buf);
   duk_pop(ctx);  /* pop eval result */

   duk_destroy_heap(ctx);

   return 0;
}

