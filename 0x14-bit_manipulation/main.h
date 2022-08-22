#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

unsigned int _strlen(const char *s);
unsigned int binary_to_uint(const char *b);
unsigned int _pow(int base, unsigned int exp);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
unsigned long int _powu(int base, unsigned int exp);
int get_endianness(void);

#endif /* main_h */
