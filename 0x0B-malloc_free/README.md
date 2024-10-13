# 0x0B-malloc_free

## Description

This project focuses on dynamic memory allocation in C using `malloc` and `free`. It covers how to allocate memory dynamically, how to manage memory, and how to avoid memory leaks. The project aims to provide a deep understanding of these fundamental concepts in C programming.

### Resources

#### Read or watch

- [Dynamic Memory Allocation in C](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
- [Understanding and Using `malloc` and `free` in C](https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm)
- [Memory Management in C](https://www.studytonight.com/c/memory-management-in-c.php)
- [Avoiding Memory Leaks in C](https://www.cprogramming.com/tutorial/memory_debugging_parallel.html)

### Learning Objectives

#### General

- What is dynamic memory allocation and why is it needed.
- How to use `malloc`, `calloc`, `realloc`, and `free` to manage memory.
- How to handle memory allocation errors.
- How to avoid memory leaks and dangling pointers.

### Tasks

| Task Name                 | File                                   | Description                                                                                                       |
| ------------------------- | -------------------------------------- | ----------------------------------------------------------------------------------------------------------------- |
| Create an array of chars  | [0-create_array.c](./0-create_array.c) | Creates an array of chars and initializes it with a specific char.                                                |
| Duplicate a string        | [1-strdup.c](./1-strdup.c)             | Returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. |
| Concatenate two strings   | [2-str_concat.c](./2-str_concat.c)     | Concatenates two strings.                                                                                         |
| Allocate a grid           | [3-alloc_grid.c](./3-alloc_grid.c)     | Returns a pointer to a 2 dimensional array of integers.                                                           |
| Free a grid               | [4-free_grid.c](./4-free_grid.c)       | Frees a 2 dimensional grid previously created by your `alloc_grid` function.                                      |
| Concatenate all arguments | [100-argstostr.c](./100-argstostr.c)   | Concatenates all the arguments of your program.                                                                   |
| Split a string into words | [101-strtow.c](./101-strtow.c)         | Splits a string into words.                                                                                       |

### Usage

To compile any of the C files, use the following command:

```sh
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <outputfile>
```

For example, to compile `0-create_array.c`:

```sh
gcc -Wall -Werror -Wextra -pedantic 0-create_array.c -o create_array
```

To run the compiled program:

```sh
./create_array
```
