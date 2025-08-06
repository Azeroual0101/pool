#!/bin/bash

rm -f *.o libft.a

gcc -Wall -Wextra -Werror -c *.c

ar rcs libft.a *.o
