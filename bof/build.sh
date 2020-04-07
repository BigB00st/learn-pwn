#!/usr/bin/bash
gcc \
-fno-stack-protector \
-no-pie \
-o bof bof.c