#!/usr/bin/bash
gcc \
-Wl,-z,norelro \
-no-pie \
-o got got.c