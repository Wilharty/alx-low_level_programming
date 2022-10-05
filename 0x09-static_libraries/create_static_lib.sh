#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar -rsc liball.a *.o
