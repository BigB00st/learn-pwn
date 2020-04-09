#!/usr/bin/bash
gcc \
-fno-stack-protector \
-o pie pie.c