#ifndef MAIN_H
#define MAIN_H

/*task 0*/
unsigned int binary_to_uint(const char *b);
int get_length(const char *str);

/*task 1*/
void print_binary(unsigned long int n);
void get_bits(unsigned long int num);
int _putchar(char c);

/*task 2*/
int get_bit(unsigned long int n, unsigned int index);

/*task 3*/
int set_bit(unsigned long int *n, unsigned int index);

/*task 4*/
int clear_bit(unsigned long int *n, unsigned int index);

/*task 5*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/*task 100*/
int get_endianness(void);

#endif /*MAIN_H*/
