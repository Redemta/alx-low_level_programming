#!/bin/bash
gcc -Wall -pedantic -warror -wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
