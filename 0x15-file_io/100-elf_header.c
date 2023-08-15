#include "main.h"

void checkr_elf(unsigned char *iloc);
void out_class(unsigned char *iloc);
void out_magic(unsigned char *iloc);
void out_data(unsigned char *iloc);
void out_version(unsigned char *iloc);
void out_abi_version(unsigned char *iloc);
void out_type(unsigned char *iloc);
void out_entry_pt(unsigned char *iloc);
void out_os_abi(unsigned char *iloc);
void end_elf(int elf);
/**
 * checkr_elf - confirm the file is elf
 * @
