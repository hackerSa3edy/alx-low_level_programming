# 0x09-static_libraries

## Description

This project focuses on static libraries in C. It covers how to create and use static libraries, how to compile and link them with programs, and the advantages and disadvantages of using static libraries. The project aims to provide a deep understanding of these fundamental concepts in C programming.

### Resources

#### Read or watch

- [Static Libraries in C](https://www.geeksforgeeks.org/static-vs-dynamic-libraries/)
- [Creating and Using Static Libraries](https://www.tutorialspoint.com/static-libraries-in-c)
- [Static Libraries](https://www.studytonight.com/c/static-libraries-in-c.php)
- [GNU ar](https://www.gnu.org/software/binutils/manual/html_chapter/ar.html)

### Learning Objectives

#### General

- What is a static library, how does it work, how to create one, and how to use it.
- Basic usage of `ar`, `ranlib`, `nm`.

### Tasks

| Task Name                                                     | File                                           | Description                                                                                                                                     |
| ------------------------------------------------------------- | ---------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------- |
| A library is not a luxury but one of the necessities of life  | [libmy.a](./libmy.a), [main.h](./main.h)       | Creates a static library called `libmy.a` containing all the functions listed in `main.h`.                                                      |
| Without libraries what have we? We have no past and no future | [create_static_lib.sh](./create_static_lib.sh) | Writes a script called `create_static_lib.sh` that creates a static library called `liball.a` from all the `.c` files in the current directory. |
