# 0x0E-structures_typedef

## Description

This project focuses on structures and typedef in C. It covers how to define and use structures, how to use typedef to create alias names for data types, and how to work with structures effectively in your code.

### Resources

#### Read or watch

- [Structures in C](https://www.geeksforgeeks.org/structures-c/)
- [typedef in C](https://www.tutorialspoint.com/cprogramming/c_typedef.htm)
- [C Structures](https://www.programiz.com/c-programming/c-structures)
- [C Programming - Structures](https://www.studytonight.com/c/structures-in-c.php)

### Learning Objectives

#### General

- What are structures, when, why and how to use them.
- How to use `typedef`.

### Tasks

| Task                                                                                                                 | File                             | Description                                                                              |
| -------------------------------------------------------------------------------------------------------------------- | -------------------------------- | ---------------------------------------------------------------------------------------- |
| 0. Poppy                                                                                                             | [dog.h](./dog.h)                 | Defines a new type `struct dog` with the following elements: `name`, `age`, and `owner`. |
| 1. A dog is the only thing on earth that loves you more than you love yourself                                       | [1-init_dog.c](./1-init_dog.c)   | Writes a function that initializes a variable of type `struct dog`.                      |
| 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad               | [2-print_dog.c](./2-print_dog.c) | Writes a function that prints a `struct dog`.                                            |
| 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read                            | [dog.h](./dog.h)                 | Defines a new type `dog_t` as a new name for the type `struct dog`.                      |
| 4. A door is what a dog is perpetually on the wrong side of                                                          | [4-new_dog.c](./4-new_dog.c)     | Writes a function that creates a new dog.                                                |
| 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg | [5-free_dog.c](./5-free_dog.c)   | Writes a function that frees dogs.                                                       |
