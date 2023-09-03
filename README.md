# static_library

This project implements fundamental data structures—stack, queue, and linked list. 

## Features

1. **Stack Using Array**
   - Last In First Out (LIFO) structure.
   - Array-based implementation.
   - Operations: Push, Pop, Peek, isEmpty, isFull.
   - Efficiently manage a collection of elements with a stack-like behavior.

2. **Queue Using Array**
   - First In First Out (FIFO) structure.
   - Array-based implementation.
   - Operations: Enqueue, Dequeue, isEmpty, isFull.
   - Handle elements in a queue-like manner for various applications.

3. **Linked List Using Array**
   - Implementation of a singly linked list.
   - Array-based storage for each node.
   - Operations: Initialize, Insert at Beginning, Insert at Ending, Delete, Display.
   - Facilitate dynamic data storage and manipulation with a linked list structure.

## Getting Started

1. **Compile Source Files**
   - Compile the source files for each data structure into object files.
   - Example:
     ```shell
     gcc -c stack.c -o stack.o
     gcc -c queue.c -o queue.o
     gcc -c linked_list.c -o linked_list.o
     ```

2. **Create Static Library**
   - Create a static library using the object files.
   - Example:
     ```shell
     ar rcs libdatastructures.a stack.o queue.o linked_list.o
     ```
     ar command is used to create the static library.
     
     -c: Create a new archive.
     
     -r: Add or replace files in the archive.
     
     -s: Add an index to the archive 

3. **Link with Your Program**
   - Link the library with your program that uses these data structures.
   - Example:
     ```shell
     gcc main.c -o main -L. libdatastructures.a
     ```

4. **Run Your Program**
   - Execute your program to utilize the provided data structures.
   - Example:
     ```shell
     ./main
     ```

## Contributions

Contributions are welcome! If you'd like to improve or expand this library, feel free to open issues or pull requests. Let's make this project even better together.

