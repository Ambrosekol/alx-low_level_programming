#!/bin/bash
gcc -Wall -Werror -fPIC -c *.c
gcc --shared *.o -o liball.so
rm -f *.o
