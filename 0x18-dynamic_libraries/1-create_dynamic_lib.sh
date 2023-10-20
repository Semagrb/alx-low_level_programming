#!/bin/bash

# Compile all the .c files in the current directory into a shared library.
gcc -Wall -pedantic -Werror -Wextra -shared -fPIC -o liball.so *.c

# Check if the compilation was successful
if [ $? -eq 0 ]; then
  echo "Dynamic library liball.so created successfully."
else
  echo "Compilation failed."
fi
