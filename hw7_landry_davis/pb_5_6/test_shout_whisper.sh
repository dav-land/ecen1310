#! /bin/bash

run () {
    echo "$*"           # echo the command
    if $*               # execute it and test result
    then echo 'success'
    else echo 'error'
    fi
}

run ./shout_whisper -s <<EOF
helO therE I lIkE ThIs!!@
EOF
run ./shout_whisper -w -2
run ./shout_whisper -w <<EOF
HI THERE IM ECited but bat at spelling!.
EOF
exit 0
