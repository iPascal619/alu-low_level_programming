#!/bin/bash

# List of C files
files=("3-print_alphabets.c" "4-print_alphabt.c" "5-print_numbers.c" "6-print_numberz.c" "7-print_tebahpla.c" "8-print_base16.c" "9-print_comb.c")

# Compile each C file
for file in "${files[@]}"; do
    output="${file%.c}"
    gcc "$file" -o "$output"
    if [ $? -eq 0 ]; then
        echo "Compiled $file successfully."
    else
        echo "Failed to compile $file."
        exit 1
    fi
done

# Execute each compiled file
for file in "${files[@]}"; do
    output="${file%.c}"
    echo "Running $output:"
    ./"$output"
    echo ""
done

