#!/usr/bin/env bash

# Check if we need to remove previous executable file
if [ -f "./a.out" ]; then
	rm a.out
fi

# Gather all the .cpp and .cc files in our current directory
cpp_files=$(find . -name "*.cc" -o -name "*.cpp")

# Compile them
clang++ $cpp_files -g -o a.out

# If an executable was successfully created, run it
if [ -f "./a.out" ]; then
	./a.out
fi