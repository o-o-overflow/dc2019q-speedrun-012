/*
 *  Hobject ECMAScript [[Class]].
 */

#include "duk_internal.h"

#if (DUK_STRIDX_UC_ARGUMENTS > 255)
#error constant too large
#endif
#if (DUK_STRIDX_ARRAY > 255)
#error constant too large
#endif
#if (DUK_STRIDX_UC_BOOLEAN > 255)
#error constant too large
#endif
#if (DUK_STRIDX_DATE > 255)
#error constant too large
#endif
#if (DUK_STRIDX_UC_ERROR > 255)
#error constant too large
#endif
#if (DUK_STRIDX_UC_FUNCTION > 255)
#error constant too large
#endif
#if (DUK_STRIDX_JSON > 255)
#error constant too large
#endif
#if (DUK_STRIDX_MATH > 255)
#error constant too large
#endif
#if (DUK_STRIDX_UC_NUMBER > 255)
#error constant too large
#endif
#if (DUK_STRIDX_UC_OBJECT > 255)
#error constant too large
#endif
#if (DUK_STRIDX_REG_EXP > 255)
#error constant too large
#endif
#if (DUK_STRIDX_UC_STRING > 255)
#error constant too large
#endif
#if (DUK_STRIDX_GLOBAL > 255)
#error constant too large
#endif
#if (DUK_STRIDX_OBJ_ENV > 255)
#error constant too large
#endif
#if (DUK_STRIDX_DEC_ENV > 255)
#error constant too large
#endif
#if (DUK_STRIDX_UC_POINTER > 255)
#error constant too large
#endif
#if (DUK_STRIDX_UC_THREAD > 255)
#error constant too large
#endif
#if (DUK_STRIDX_OOOARRAY_BUFFER_OOO > 255)
#error constant too large
#endif
#if (DUK_STRIDX_DATA_VIEW > 255)
#error constant too large
#endif
#if (DUK_STRIDX_OOOINT8_ARRAY_OOO > 255)
#error constant too large
#endif
#if (DUK_STRIDX_OOOUINT8_ARRAY_OOO > 255)
#error constant too large
#endif
#if (DUK_STRIDX_UINT8_CLAMPED_ARRAY > 255)
#error constant too large
#endif
#if (DUK_STRIDX_OOOINT16_ARRAY_OOO > 255)
#error constant too large
#endif
#if (DUK_STRIDX_OOOUINT16_ARRAY_OOO > 255)
#error constant too large
#endif
#if (DUK_STRIDX_OOOINT32_ARRAY_OOO > 255)
#error constant too large
#endif
#if (DUK_STRIDX_OOOUINT32_ARRAY_OOO > 255)
#error constant too large
#endif
#if (DUK_STRIDX_OOOFLOAT32_ARRAY_OOO > 255)
#error constant too large
#endif
#if (DUK_STRIDX_OOOFLOAT64_ARRAY_OOO > 255)
#error constant too large
#endif
#if (DUK_STRIDX_EMPTY_STRING > 255)
#error constant too large
#endif

/* Note: assumes that these string indexes are 8-bit, genstrings.py must ensure that */
DUK_INTERNAL duk_uint8_t duk_class_number_to_stridx[32] = {
	DUK_STRIDX_EMPTY_STRING,  /* NONE, intentionally empty */
	DUK_STRIDX_UC_OBJECT,
	DUK_STRIDX_ARRAY,
	DUK_STRIDX_UC_FUNCTION,
	DUK_STRIDX_UC_ARGUMENTS,
	DUK_STRIDX_UC_BOOLEAN,
	DUK_STRIDX_DATE,
	DUK_STRIDX_UC_ERROR,
	DUK_STRIDX_JSON,
	DUK_STRIDX_MATH,
	DUK_STRIDX_UC_NUMBER,
	DUK_STRIDX_REG_EXP,
	DUK_STRIDX_UC_STRING,
	DUK_STRIDX_GLOBAL,
	DUK_STRIDX_UC_SYMBOL,
	DUK_STRIDX_OBJ_ENV,
	DUK_STRIDX_DEC_ENV,
	DUK_STRIDX_UC_POINTER,
	DUK_STRIDX_UC_THREAD,
	DUK_STRIDX_OOOARRAY_BUFFER_OOO,
	DUK_STRIDX_DATA_VIEW,
	DUK_STRIDX_OOOINT8_ARRAY_OOO,
	DUK_STRIDX_OOOUINT8_ARRAY_OOO,
	DUK_STRIDX_UINT8_CLAMPED_ARRAY,
	DUK_STRIDX_OOOINT16_ARRAY_OOO,
	DUK_STRIDX_OOOUINT16_ARRAY_OOO,
	DUK_STRIDX_OOOINT32_ARRAY_OOO,
	DUK_STRIDX_OOOUINT32_ARRAY_OOO,
	DUK_STRIDX_OOOFLOAT32_ARRAY_OOO,
	DUK_STRIDX_OOOFLOAT64_ARRAY_OOO,
	DUK_STRIDX_EMPTY_STRING,  /* UNUSED, intentionally empty */
	DUK_STRIDX_EMPTY_STRING,  /* UNUSED, intentionally empty */
};
