from ubuntu:18.04
run echo "travis_fold:start:Dapt\033[33;1mservice Dockerfile apt\033[0m" &&     apt-get -qq update && apt-get install -qq xinetd &&     echo "\ntravis_fold:end:Dapt\r"


copy speedrun-012 /
run chmod 755 /speedrun-012

run touch /flag && chmod 644 /flag && echo "OOO{Rule #3: Never \`open\` the package. Who knows what pwns are lying about?}" > /flag
copy service.conf /service.conf
copy wrapper /wrapper
copy banner_fail /

expose 31337

cmd ["/usr/sbin/xinetd", "-filelog", "-", "-dontfork", "-f", "/service.conf"]

