#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * print_error - Prints an error message to stderr and returns exit status 98.
 *
 * @error_msg: the error message to display
 *
 * Return: 98
 */
int print_error(char *error_msg)
{
	fprintf(stderr, "Error: %s\n", error_msg);
	return (98);
}
/**
 * print_elf_header - Prints the ELF header to stdout in the same format
 * @header: the ELF header to print
 */
void print_elf_header(Elf64_Ehdr header)
{
	int i;
	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", header.e_type);
	printf("  Entry point address:               0x%lx\n", header.e_entry);
}
/**
 * read_elf_header - Reads the ELF header from the specified file
 * @fd: the file descriptor of the ELF file
 */
void read_elf_header(int fd)
{
	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		exit(print_error("Failed to read ELF header"));
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		exit(print_error("File is not an ELF file"));
	}
	print_elf_header(header);
}
