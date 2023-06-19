#!/bin/bash

# Get the list of all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each C file into object files
for file in $c_files; do
	gcc -c -fPIC "$file" -o "${file%.c}.o" ||
		{ echo "Compilation failed for $file"; exit 1; }
	done

# Create the dynamic library
gcc -shared -o liball.so *.o ||
	{ echo "Dynamic library creation failed"; exit 1; }

# Cleanup - Remove the object files
rm *.o

echo "Dynamic library 'liball.so' created successfully."
