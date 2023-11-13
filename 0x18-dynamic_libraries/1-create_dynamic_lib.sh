#!/bin/bash
gcc -std=gnu89 -Wextra -Werror -Wall -pedantic -c -fPIC *.c
gcc -std=gnu89 -Wextra -Werror -Wall -pedantic -shared *.o -o liball.so
