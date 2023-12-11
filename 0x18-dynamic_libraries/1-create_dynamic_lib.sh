#!/bin/bash
gcc -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD-LIBRARY_PATH=.:$LIBRARY_PATH
