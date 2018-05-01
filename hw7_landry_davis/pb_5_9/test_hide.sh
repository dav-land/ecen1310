#! /bin/bash

# Simple test for the hide program.

run () {
  echo "$*"
  if $*
  then echo 'success'
  else echo 'error'
  fi
}

cat msg.txt
run ./hide -encrypt < msg.txt > msge.txt
cat msge.txt
run ./hide -decrypt < msge.txt > msga.txt
cat msga.txt
cat nothingChanges.txt
run ./hide -encrypt < nothingChanges.txt > nothingChangesa.txt
cat nothingChangesa.txt
cat capitals.txt
run ./hide -encrypt < capitals.txt > capitalsa.txt
cat capitalsa.txt
run ./hide -decrypt < capitalsa.txt > capitalsb.txt
cat capitalsb.txt

run ./hide -encrypt <<EOF
abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ 0123456789 ~!@#$%^&*
EOF

exit 0
