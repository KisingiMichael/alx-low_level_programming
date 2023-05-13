#include "main.h"
#include <elf.h>

void elf_check(unsigned char *e_ident);
void elf_magic(unsigned char *e_ident);
void elf_class(unsigned char *e_ident);
void elf_data(unsigned char *e_ident);
void elf_version(unsigned char *e_ident);
void elf_osabi(unsigned char *e_ident);
void elf_abiversion(unsigned char *e_ident);
void elf_type(unsigned int e_type, unsigned char *e_ident);
void elf_entryAddress(unsigned int e_entry, unsigned char *e_ident);


/**
 * elf_check - function to check if file has elf format
 * @e_ident: array of bytes specifying the interpretation of the file
 */
void elf_check(unsigned char *e_ident)
{
	int i = 0;

	for (; i < 4; i++)
	{
		if (e_ident[i] != 127 && e_ident[i] != 'E' && e_ident[i] != 'L' && e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF fil\n");
			exit(98);
		}
	}
}


/**
 * elf_magic - function to determine magic characters of elf header file
 * @e_ident: array of bytes specifying the file interpretation
 */
void elf_magic(unsigned char *e_ident)
{
	int i = 0;

	printf("Magic: ");

	for (; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}



/**
 * elf_class - function to determineclasses in elf header
 * @e_ident: array of bytes specifying the file interpretation
 */
void elf_class(unsigned char *e_ident)
{
	printf("Class: ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("This class is invalid\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unkown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
 * elf_data - function to print data from elf header file
 * @e_ident: array of bytes specifying the file interpretation
 */
void elf_data(unsigned char *e_ident)
{
	printf("Data ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Unknown data format\n");
			break;
		case ELFDATA2LSB:
			printf("Two's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("Two's complete, big-endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}



/**
 * elf_version - function to show version of the file
 * @e_ident: array of bytes specifying the file interpretation
 */
void elf_version(unsigned char *e_ident)
{
	printf("version: %d", e_ident[EI_VERSION]);
	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("current)\n");
			break;
		default:
			printf("\n");
	}
}


/**
 * elf_osabi - function to determin OSABI values in the header file
 * @e_ident: array of bytes specifying the file interprtation
 */
void elf_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case  ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI\n");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI\n");
			break;
		case  ELFOSABI_IRIX:
			printf("IRIX ABI\n");
			break;
		case  ELFOSABI_FREEBSD:
			printf("FreeBSD ABI\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX ABI\n");
			break;
		case ELFOSABI_ARM:
			printf(" ARM architecture ABI\n");
			break;
		case ELFOSABI_STANDALONE:
			printf(" Stand-alone (embedded) ABI\n");
			break;
		default:
			printf("<unkown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * elf_abiversion - function to determine ABI version in the header file
 * @e_ident: array of bytes specifying the file interprtation
 */
void elf_abiversion(unsigned char *e_ident)
{
	printf("Abi Version: %d\n", e_ident[EI_ABIVERSION]);
}


/**
 * elf_type - function to determine type of the elf file in a file header
 * @e_type: elf type
 * @e_ident: array of bytes specifying the file interprtation
 */
void elf_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("Type: ");
	switch (e_type)
	{
		case ET_NONE:
			printf("An unknown type\n");
			break;
		case ET_REL:
			printf("A relocatable file\n");
			break;
		case ET_EXEC:
			printf("An executable file\n");
			break;
		case ET_DYN:
			printf("A shared object\n");
			break;
		case ET_CORE:
			printf("A core file\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}


/**
 * elf_entryAddress - function to determine ABI version in the header file
 * @e_entry: entry address of the elf file
 * @e_ident: array of bytes specifying the file interprtation
 */
void elf_entryAddress(unsigned int e_entry, unsigned char *e_ident)
{
	printf("Entry point address: ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#x\n", e_entry);
}


/**
 * main - main function
 * @argc: number of arguments
 * @argv: pointer of array to the arguments
 *
 * Return: Alway 0 on success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *elf_header;
	int open_file, read_file;

	open_file = open(argv[1], O_RDONLY);
	if (open_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(98);
	}
	elf_header = malloc(sizeof(Elf64_Ehdr));
	if (!elf_header)
	{
		close(open_file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read_file = read(open_file, elf_header, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(elf_header);
		close(open_file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	elf_check(elf_header->e_ident);
	printf("ELF header:\n");
	elf_magic(elf_header->e_ident);
	elf_class(elf_header->e_ident);
	elf_data(elf_header->e_ident);
	elf_version(elf_header->e_ident);
	elf_osabi(elf_header->e_ident);
	elf_abiversion(elf_header->e_ident);
	elf_type(elf_header->e_type, elf_header->e_ident);
	elf_entryAddress(elf_header->e_entry, elf_header->e_ident);

	free(elf_header);
	close(open_file);
	return (0);
}

