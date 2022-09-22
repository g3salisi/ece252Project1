#include <stdio.h>

int is_png();

// int is_png(U8 *buf, size_t n);
int get_png_height(struct data_IHDR *buf);
int get_png_width(struct data_IHDR *buf);
int get_png_data_IHDR(struct data_IHDR *out, FILE *fp, long offset, int whence);