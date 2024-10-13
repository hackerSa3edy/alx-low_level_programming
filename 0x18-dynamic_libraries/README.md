# 0x18-dynamic_libraries

## Description

This project focuses on dynamic libraries in C. It covers how to create and use dynamic libraries, how to compile and link them with programs, and the advantages and disadvantages of using dynamic libraries. The project aims to provide a deep understanding of these fundamental concepts in C programming.

### Resources

#### Read or watch

- [Dynamic Libraries in C](https://www.geeksforgeeks.org/dynamic-libraries-in-c/)
- [Creating and Using Dynamic Libraries](https://www.tutorialspoint.com/creating-and-using-dynamic-libraries-in-c)
- [Dynamic Libraries](https://www.studytonight.com/c/dynamic-libraries-in-c.php)
- [GNU Compiler Collection (GCC) - Shared Libraries](https://gcc.gnu.org/onlinedocs/gcc-3.3.6/gcc/Shared-Libraries.html)

### Learning Objectives

#### General

- What is a dynamic library, how does it work, how to create one, and how to use it.
- What is the environment variable `$LD_LIBRARY_PATH` and how to use it.
- What are the differences between static and dynamic libraries.
- Basic usage of `nm`, `ldd`, `ldconfig`.

### Tasks

| Task Name                                                     | File                                                 | Description                                                                                                         |
| ------------------------------------------------------------- | ---------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------- |
| A library is not a luxury but one of the necessities of life  | [libdynamic.so](./libdynamic.so), [main.h](./main.h) | Creates a dynamic library called `libdynamic.so` containing all the functions listed in `main.h`.                   |
| Without libraries what have we? We have no past and no future | [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) | Writes a script that creates a dynamic library called `liball.so` from all the `.c` files in the current directory. |
| Let's call C functions from Python                            | [100-operations.so](./100-operations.so)             | Creates a dynamic library that can be called from Python.                                                           |
| Code injection: Win the Giga Millions!                        | [101-make_me_win.sh](./101-make_me_win.sh)           | Writes a script that injects code to win the Giga Millions lottery.                                                 |
