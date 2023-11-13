#!/bin/bash

# Create unlinked Position-Independent Code file
gcc -std=gnu89 -Wextra -Werror -Wall -pedantic -c -fPIC *.c

# Create the shared library (dynamic library)
gcc -std=gnu89 -Wextra -Werror -Wall -pedantic -shared *.o -o liball.so
