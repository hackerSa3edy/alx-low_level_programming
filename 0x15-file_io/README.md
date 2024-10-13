# 0x15-file_io

## Description

This project focuses on file input/output (I/O) in C. It covers how to open, read, write, and close files, how to use file descriptors, and how to handle errors during file operations. The project aims to provide a deep understanding of these fundamental concepts in C programming.

### Resources

#### Read or watch

- [File I/O in C](https://www.geeksforgeeks.org/basics-file-handling-c/)
- [C File I/O](https://www.tutorialspoint.com/cprogramming/c_file_io.htm)
- [File Handling in C](https://www.programiz.com/c-programming/c-file-input-output)
- [C Programming - File I/O](https://www.studytonight.com/c/file-input-output.php)

### Learning Objectives

#### General

- How to create, open, close, read and write files.
- What are file descriptors.
- What are the standard file descriptors, and what are their purpose.
- How to use the I/O system calls `open`, `close`, `read` and `write`.
- What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`.
- What are file permissions, and how to set them when creating a file with the `open` system call.
- What is a system call.
- What is the difference between a function and a system call.

### Tasks

| Task Name                  | File                                                 | Description                                                                                                 |
| -------------------------- | ---------------------------------------------------- | ----------------------------------------------------------------------------------------------------------- |
| Tread lightly, she is near | [0-read_textfile.c](./0-read_textfile.c)             | Writes a function that reads a text file and prints it to the `POSIX` standard output.                      |
| Under the snow             | [1-create_file.c](./1-create_file.c)                 | Writes a function that creates a file.                                                                      |
| Speak gently, she can hear | [2-append_text_to_file.c](./2-append_text_to_file.c) | Writes a function that appends text at the end of a file.                                                   |
| cp                         | [3-cp.c](./3-cp.c)                                   | Writes a program that copies the content of a file to another file.                                         |
| elf                        | [100-elf_header.c](./100-elf_header.c)               | Writes a program that displays the information contained in the `ELF` header at the start of an `ELF` file. |
