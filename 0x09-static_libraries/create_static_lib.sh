#!/bin/bash
gcc -C -Wall -Werror -Wextra -pedantic  *.c
ar -rc liball.a *.o
ranlib liball.a
