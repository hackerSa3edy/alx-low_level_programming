#include "main.h"
#include <elf.h>

void checkELF(unsigned char *e_ident, Elf64_Ehdr *header, int fd);
void printMagic(unsigned char *e_ident);
void printClass(unsigned char *e_ident);
void printData(unsigned char *e_ident);
void printVersion(unsigned char *e_ident);
void printOSABI(unsigned char *e_ident);
void printABIVERSION(unsigned char *e_ident);
void printType(unsigned int e_type, unsigned char *e_ident);
void printEntryPoint(unsigned long int e_type, unsigned char *e_ident);
void closeELF(int elf);

/**
 * main - display the information contained in the ELF header
 *	at the start of an ELF file.
 *
 * @argc: number of arguments.
 * @argv: arguments values.
 *
 * Return: (0) always success, otherwise (1).
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr *header;
	int fd, fd_read;

	(void) argc;

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "%s: Can't open the file %s\n", argv[0], argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		dprintf(STDERR_FILENO, "%s: Can't read the file %s\n", argv[0], argv[1]);
		closeELF(fd);
		exit(98);
	}

	fd_read = read(fd, header, sizeof(Elf64_Ehdr));
	if (fd_read < 0)
	{
		printf("%s: Can't read the file %s\n", argv[0], argv[1]);
		free(header);
		closeELF(fd);
		exit(98);
	}

	checkELF(header->e_ident, header, fd);
	dprintf(STDOUT_FILENO, "ELF Header:\n");
	printMagic(header->e_ident);
	printClass(header->e_ident);
	printData(header->e_ident);
	printVersion(header->e_ident);
	printOSABI(header->e_ident);
	printABIVERSION(header->e_ident);
	printType(header->e_type, header->e_ident);
	printEntryPoint(header->e_entry, header->e_ident);

	free(header);
	closeELF(fd);
	return (0);
}

/**
 * checkELF - checks if the file is ELF format.
 *
 * @e_ident: A pionter to an array containing the ELF class.
 * @header: ELF header.
 * @fd: file descriptor.
 *
 * Return: Nothing.
 */
void checkELF(unsigned char *e_ident, Elf64_Ehdr *header, int fd)
{
	if (!(e_ident[EI_MAG0] == 0x7F &&
		e_ident[EI_MAG1] == 'E' &&
		e_ident[EI_MAG2] == 'L' &&
		e_ident[EI_MAG3] == 'F'))
	{
		dprintf(STDERR_FILENO,
				"Error: Not an ELF file - it has the wrong magic bytes at the start\n");
		free(header);
		close(fd);
		exit(98);
	}
	if (e_ident[EI_CLASS] != ELFCLASS32 && e_ident[EI_CLASS] != ELFCLASS64)
		exit(98);
}

/**
 * printMagic - prints the ELF header.
 *
 * @e_ident: A pionter to an array containing the ELF class.
 *
 * Return: Nothing.
 */
void printMagic(unsigned char *e_ident)
{
	int index;

	dprintf(STDOUT_FILENO, "  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		dprintf(STDOUT_FILENO, "%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			dprintf(STDOUT_FILENO, "\n");
		else
			dprintf(STDOUT_FILENO, " ");
	}
}

/**
 * printClass - prints the class of an ELF header.
 *
 * @e_ident: A pionter to an array containing the ELF class.
 *
 * Return: Nothing.
 */
void printClass(unsigned char *e_ident)
{
	elfClasses classes[] = {
		{ELFCLASS32, "ELF32"},
		{ELFCLASS64, "ELF64"},
	};
	int index = 0;
	int len = sizeof(classes);

	while (index < len)
	{
		if (e_ident[EI_CLASS] == classes[index].classByte)
		{
			dprintf(STDOUT_FILENO,
					"  Class:                             %s\n",
					classes[index].classString);
			return;
		}
		index++;
	}
}

/**
 * printData - prints the data of an ELF header.
 *
 * @e_ident: A pionter to an array containing the ELF class.
 *
 * Return: Nothing.
 */
void printData(unsigned char *e_ident)
{
	elfData data[] = {
		{ELFDATA2LSB, "2's complement, little endian"},
		{ELFDATA2MSB, "2's complement, big endian"},
	};
	int index = 0;
	int len = sizeof(data);

	while (index < len)
	{
		if (e_ident[EI_DATA] == data[index].dataByte)
		{
			dprintf(STDOUT_FILENO,
					"  Data:                              %s\n",
					data[index].dataString);
			return;
		}
		index++;
	}
}

/**
 * printVersion - prints the version of an ELF header.
 *
 * @e_ident: A pionter to an array containing the ELF class.
 *
 * Return: Nothing.
 */
void printVersion(unsigned char *e_ident)
{
	if (e_ident[EI_VERSION] == EV_CURRENT)
	{
		dprintf(STDOUT_FILENO,
				"  Version:                           %i (current)\n",
				e_ident[EI_VERSION]);
				return;
	}
	dprintf(STDOUT_FILENO,
				"  Version:                           %i\n",
				e_ident[EI_VERSION]);
}

/**
 * printOSABI - prints the OS/ABI of an ELF header.
 *
 * @e_ident: A pionter to an array containing the ELF class.
 *
 * Return: Nothing.
 */
void printOSABI(unsigned char *e_ident)
{
	elfABI ABI[] = {
		{ELFOSABI_NONE, "UNIX - System V"},
		{ELFOSABI_SYSV, "UNIX - System V"},
		{ELFOSABI_HPUX, "UNIX - HP-UX"},
		{ELFOSABI_NETBSD, "UNIX - NetBSD"},
		{ELFOSABI_LINUX, "UNIX - Linux"},
		{ELFOSABI_SOLARIS, "UNIX - Solaris"},
		{ELFOSABI_IRIX, "UNIX - IRIX"},
		{ELFOSABI_FREEBSD, "UNIX - FreeBSD"},
		{ELFOSABI_TRU64, "UNIX - TRU64"},
		{ELFOSABI_ARM, "ARM"},
		{ELFOSABI_STANDALONE, "Standalone App"},
	};
	int index = 0;
	int len = sizeof(ABI);

	while (index < len)
	{
		if (e_ident[EI_OSABI] == ABI[index].abiByte)
		{
			dprintf(STDOUT_FILENO,
					"  OS/ABI:                            %s\n",
					ABI[index].abiString);
			return;
		}
		index++;
	}
	dprintf(STDOUT_FILENO,
	"  OS/ABI:                            <unknown: %x>\n",
	e_ident[EI_OSABI]);
}

/**
 * printABIVERSION - prints the ABI version of an ELF header.
 *
 * @e_ident: A pionter to an array containing the ELF class.
 *
 * Return: Nothing.
 */
void printABIVERSION(unsigned char *e_ident)
{
	dprintf(STDOUT_FILENO,
			"  ABI Version:                       %d\n",
			e_ident[EI_ABIVERSION]);
}

/**
 * printType - prints the type of an ELF header.
 *
 * @e_ident: A pointer to an array containing the ELF class.
 * @e_type: the ELF type.
 *
 * Return: Nothing.
 */
void printType(unsigned int e_type, unsigned char *e_ident)
{
	elfType type[] = {
		{ET_NONE, "NONE (None)"},
		{ET_REL, "REL (Relocatable file)"},
		{ET_EXEC, "EXEC (Executable file)"},
		{ET_DYN, "DYN (Shared object file)"},
		{ET_CORE, "CORE (Core file)"},
	};
	int index = 0;
	int len = sizeof(type);

	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type = e_type >> 8;

	while (index < len)
	{
		if (e_type == type[index].typeByte)
		{
			dprintf(STDOUT_FILENO,
					"  Type:                              %s\n",
					type[index].typeString);
			return;
		}
		index++;
	}
	dprintf(STDOUT_FILENO,
	"  Type:                              <unknown: %x>\n",
	e_type);
}

/**
 * printEntryPoint - prints the entry point of an ELF header.
 *
 * @e_ident: A pointer to an array containing the ELF class.
 * @e_entry: the address of the ELF entry point.
 *
 * Return: Nothing.
 */
void printEntryPoint(unsigned long int e_entry, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		dprintf(STDOUT_FILENO,
				"  Entry point address:               %#x\n",
				(unsigned int)e_entry);
	else
		dprintf(STDOUT_FILENO,
				"  Entry point address:               %#lx\n",
				e_entry);
}

/**
 * closeELF - closes an ELF file safely.
 *
 * @elf: file descriptor.
 *
 * Return: Nothing.
 */
void closeELF(int elf)
{
	int fd_close;

	fd_close = close(elf);
	if (fd_close < 0)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't close fd %i\n", elf);
		exit(98);
	}
}
