#!/usr/bin/bash
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
gcc \
-fno-stack-protector \
-no-pie \
-z execstack \
-Wl,-z,norelro \
-o bof bof.c
echo 1 | sudo tee /proc/sys/kernel/randomize_va_space