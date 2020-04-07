#!/usr/bin/bash
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space
gcc \
-no-pie \
-o canary canary.c
echo 1 | sudo tee /proc/sys/kernel/randomize_va_space