#!/usr/bin/bash
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
gcc \
-Wl,-z,norelro \
-no-pie \
-o got got.c
echo 1 | sudo tee /proc/sys/kernel/randomize_va_space