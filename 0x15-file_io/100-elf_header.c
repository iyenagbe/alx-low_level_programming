#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print_elf(unsigned char *e_ident);
void check_magic(unsigned char *e_ident);
void check_class(unsigned char *e_ident);
void check_data(unsigned char *e_ident);
void check_version(unsigned char *e_ident);
void check_abi(unsigned char *e_ident);
void check_osabi(unsigned char *e_ident);
void check_type(unsigned int e_type, unsigned char *e_ident);
void check_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * print_elf - print a file of an ELF file
 * @e_ident: pointer to array of ELF magic numbers
 * Description: If file is not ELF file - exit code 98
 */

void print_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * check_magic - check magic numbers of ELF header
 * @e_ident: pointer to array of ELF magic numbers
 * Description: numbers of magic separated by spaces
 */

void check_magic(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * check_class - check class of an ELF header
 * @e_ident: pointer to array ofELF class
 */

void check_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * check_data - check data of ELF header
 * @e_ident: pointer to array of ELF class
 */

void check_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * check_version - check version of ELF header
 * @e_ident: pointer to array of ELF version
 */

void check_version(unsigned char *e_ident)
{
	printf("  Version: 				%d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * check_osabi - check OS/ABI of ELF header
 * @e_ident: pointer to array of ELF version
 */
void check_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * check_abi - check ABI version of ELF header
 * @e_ident: pointer to array the ELF ABI version
 */

void check_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * check_type - check type of an ELF header
 * @e_type: ELF
 * @e_ident: pointer to array of ELF class
 */

void check_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * check_entry - check entry point of ELF header
 * @e_entry: address of ELF entry point
 * @e_ident: pointer to array at ELF class
 */

void check_entry( unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes ELF file.
 * @elf: file descriptor of ELF file
 * Description: Iffile cannot be closed - exit code 98
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays information in the
 * ELF header at the start of ELF file
 * @argc: number of arguments supplied
 * @argv: array pointers to arguments
 * Return: 0 updated
 * Description: If file is not ELF File or
 * the function fails - exit code 98
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, k;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	k = read(o, header, sizeof(Elf64_Ehdr));
	if (k == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	print_elf(header->e_ident);
	printf("ELF Header:\n");
	check_magic(header->e_ident);
	check_class(header->e_ident);
	check_data(header->e_ident);
	check_version(header->e_ident);
	check_osabi(header->e_ident);
	check_abi(header->e_ident);
	check_type(header->e_type, header->e_ident);
	check_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
