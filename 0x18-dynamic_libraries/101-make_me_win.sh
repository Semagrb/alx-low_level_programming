#!/bin/bash
gcc -shared -o /tmp/hack.so /path/to/your/hacked_library.c
LD_PRELOAD=/tmp/hack.so ./gm 9 8 10 24 75 9²
