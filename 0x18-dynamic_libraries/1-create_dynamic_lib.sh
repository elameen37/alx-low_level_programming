#!/bin/bash
gcc -g -FPIC -Wall -Werror -Wextra -pentantic *.c -shared -o liball.so
