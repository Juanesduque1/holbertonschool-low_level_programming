#ifndef HEADER_FILE
#define HEADER_FILE

/* Libraries */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include  <fcntl.h>

/* Prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
