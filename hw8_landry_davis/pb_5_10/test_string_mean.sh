#! /bin/bash

run () {
    echo "$*"           # echo the command
    if $*               # execute it and test result
    then echo 'success'
    else echo 'error'
    fi
}

run ./string_mean <<EOF
Hello there this should work
EOF
run ./string_mean <<EOF
 
EOF
run ./string_mean <<EOF
I be in the top
EOF
exit 0
