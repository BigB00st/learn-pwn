#!/usr/bin/bash
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
gcc \
-no-pie \
-z execstack \
-Wl,-z,norelro \
-o canary canary.c
echo 1 | sudo tee /proc/sys/kernel/randomize_va_space