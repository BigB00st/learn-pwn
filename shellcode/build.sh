#!/usr/bin/bash
gcc \
-fno-stack-protector \
-z execstack \
-o shellcode shellcode.c