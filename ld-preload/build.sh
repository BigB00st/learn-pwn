#!/usr/bin/bash
gcc \
-Wl,-z,norelro \
-o ld-preload ld-preload.c