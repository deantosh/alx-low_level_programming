#ifndef MAIN_H
#define MAIN_H

/*include files*/
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>

/*task 0*/
ssize_t read_textfile(const char *filename, size_t letters);

/*task 1*/
int create_file(const char *filename, char *text_content);

/*task 2*/
int append_text_to_file(const char *filename, char *text_content);

/*common*/
int str_len(char *str);

#endif /*MAIN_H*/
