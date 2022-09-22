
#include "lab_png.h"


int is_png(U8 *buf, size_t n) {
    // take in a pointer to the value you want to check, check it with n 
    unsigned int header;

    for (int i; i < 7; i++) {
        header += (buf[i] << 8 | (7-i);
    }
    printf("PNG header concat is %u \n", header);

    // if (n == header) {
    //     return 1;
    // } else {
    //     return 0;
    // }

    return 0;
}

int get_png_height(struct data_IHDR *buf) {
    return ntohl(buf->height);
}

int get_png_width(struct data_IHDR *buf) {
    return ntohl(buf->width);
}

int get_png_data_IHDR(struct data_IHDR *out, FILE *fp, long offset, int whence) {

}