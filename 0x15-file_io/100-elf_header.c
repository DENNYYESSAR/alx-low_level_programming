#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_elf_header(const Elf64_Ehdr *header)
{
	/* Move the declaration to the beginning of the block */
	int i;
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", (header->e_type == ET_EXEC) ? "EXEC (Executable file)" :
														((header->e_type == ET_DYN) ? "DYN (Shared object file)" :
														 ((header->e_type == ET_REL) ? "REL (Relocatable file)" : "Other")));
	printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;  /* Move the declaration to the beginning of the block */
	Elf64_Ehdr header; /* Move the declaration to the beginning of the block */
	ssize_t read_bytes;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error");
		return (98);
	}

	read_bytes = read(fd, &header, sizeof(header));
	if (read_bytes == -1)
	{
		perror("Error");
		close(fd);
		return (98);
	}

	if ((read_bytes != sizeof(header)) || (header.e_ident[EI_MAG0] != ELFMAG0) || (header.e_ident[EI_MAG1] != ELFMAG1) ||
		(header.e_ident[EI_MAG2] != ELFMAG2) || (header.e_ident[EI_MAG3] != ELFMAG3))
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}
