#! /bin/bash

run () {
    echo "$*"           # echo the command
    if $*               # execute it and test result
    then echo 'success'
    else echo 'error'
    fi
}

run ./range <<EOF
-3 15 -8 29 17
EOF
run ./range <<EOF
1 1 1 1
EOF
run ./range <<EOF
1 3 r 6 
EOF
exit 0
