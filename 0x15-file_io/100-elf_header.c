#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_header - Prints the ELF header information from an ELF file
 * @header: Pointer to an Elf64_Ehdr structure containing the ELF header
 *
 * Description: This function takes an ELF header structure and prints
 * the relevant fields in a format similar to the `readelf -h` command.
 * The fields printed include Magic, Class, Data, Version, OS/ABI, ABI Version,
 * Type, and Entry point address.
 */

void print_elf_header(Elf64_Ehdr *header) {
int i;
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++) {
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS]) {
case ELFCLASS32: printf("ELF32\n"); break;
case ELFCLASS64: printf("ELF64\n"); break;
default: printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
}
printf("  Data:                              ");
switch (header->e_ident[EI_DATA]) {
case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
default: printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
}
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI]) {
case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
default: printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
}
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header->e_type) {
case ET_EXEC: printf("EXEC (Executable file)\n"); break;
case ET_DYN: printf("DYN (Shared object file)\n"); break;
case ET_REL: printf("REL (Relocatable file)\n"); break;
default: printf("<unknown: %x>\n", header->e_type);
}
printf("  Entry point address:               0x%lx\n", (unsigned long) header->e_entry);
}
/**
 * print_elf_header - Prints the ELF header information from an ELF file
 * @header: Pointer to an Elf64_Ehdr structure containing the ELF header
 *
 * Description: This function takes an ELF header structure and prints
 * the relevant fields in a format similar to the `readelf -h` command.
 * The fields printed include Magic, Class, Data, Version, OS/ABI, ABI Version,
 * Type, and Entry point address.
 */



int main(int argc, char *argv[]) {
int fd;
Elf64_Ehdr header;
ssize_t nread;
if (argc != 2) {
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(97);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1) {
perror("Error: Can't read file");
exit(98);
}
nread = read(fd, &header, sizeof(header));
if (nread == -1 || nread != sizeof(header)) {
perror("Error: Can't read file");
close(fd);
exit(98);
}
if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
fprintf(stderr, "Error: Not an ELF file\n");
close(fd);
exit(98);
}
print_elf_header(&header);
close(fd);
return 0;
}

