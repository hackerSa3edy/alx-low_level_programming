#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);

typedef struct ElfClasses
{
	int classByte;
	char classString[10];
} elfClasses;

typedef struct ElfData
{
	int dataByte;
	char dataString[100];
} elfData;

typedef struct ElfABI
{
	int abiByte;
	char abiString[100];
} elfABI;

typedef struct ElfType
{
	unsigned int typeByte;
	char typeString[100];
} elfType;


#endif
