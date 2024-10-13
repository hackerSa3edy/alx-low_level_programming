# 0x0D-preprocessor

## Description

This project focuses on the C preprocessor, which is a tool that processes source code before it is compiled. It covers various preprocessor directives, macros, and how to use them effectively in your code.

### Resources

#### Read or watch

- [Understanding C Preprocessor](https://www.geeksforgeeks.org/preprocessor-in-c/)
- [C Preprocessor Directives](https://www.tutorialspoint.com/cprogramming/c_preprocessors.htm)
- [C Preprocessor and Macros](https://www.programiz.com/c-programming/c-preprocessor-macros)
- [C Programming - Preprocessor](https://www.studytonight.com/c/preprocessors-in-c.php)

### Learning Objectives

#### General

- What are macros and how to use them.
- What are the most common predefined macros.
- How to include guard your header files.

### Tasks

| Task                   | File                                                 | Description                                                                                 |
| ---------------------- | ---------------------------------------------------- | ------------------------------------------------------------------------------------------- |
| 0. Object-like Macro   | [0-object_like_macro.h](./0-object_like_macro.h)     | Defines a macro named `SIZE` as an abbreviation for the token `1024`.                       |
| 1. Pi                  | [1-pi.h](./1-pi.h)                                   | Defines a macro named `PI` as an abbreviation for the token `3.14159265359`.                |
| 2. File name           | [2-main.c](./2-main.c)                               | Writes a program that prints the name of the file it was compiled from.                     |
| 3. Function-like Macro | [3-function_like_macro.h](./3-function_like_macro.h) | Defines a function-like macro `ABS(x)` that computes the absolute value of a number `x`.    |
| 4. SUM                 | [4-sum.h](./4-sum.h)                                 | Defines a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`. |
