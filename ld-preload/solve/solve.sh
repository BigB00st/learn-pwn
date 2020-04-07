#!/bin/bash
gcc -shared -fPIC solve.c -o ../solve.so 2> /dev/null
cd ..
LD_PRELOAD=$(pwd)/solve.so ./ld-preload
