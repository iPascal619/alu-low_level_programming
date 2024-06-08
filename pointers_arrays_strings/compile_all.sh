#!/bin/bash

# Compile and execute all .c files in the directory
for file in *.c
do
    # Get the filename without the extension
    filename=$(basename "$file" .c)
    
    # Compile the file
    gcc -o "$filename" "$file" -Wall -Werror -Wextra -pedantic
    
    # Check if the compilation was successful
    if [ $? -eq 0 ]; then
        echo "Compiled $file successfully."
        # Execute the compiled file
        echo "Executing $filename:"
        ./"$filename"
    else
        echo "Compilation failed for $file."
    fi
done

