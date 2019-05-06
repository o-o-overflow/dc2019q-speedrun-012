#!/bin/sh -e

# They can access print
RESULT=$(echo "print('hello world');" | nc -q 1 "$1" "$2")
echo "$RESULT" | grep "hello world"

# They should not have access to system
RESULT=$(echo "system('echo hello world')" | nc -q 1 "$1" "$2")
! echo "$RESULT" | grep "hello world"
