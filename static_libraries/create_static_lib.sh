#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar -rc libmy.a *.o
