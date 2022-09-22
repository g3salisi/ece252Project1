
#include "lab_png.h"


int is_png(U8 *buf, size_t n) {
    /*  */
    char buf_string[256];
    char n_string[256];
    for (int i; i < 7; i++) {
        char t
  _string;      strcat()
    }


    if (n == 137 80 78 71 13 10 26 10) {
        return 1;
    } else {
        return 0;
    }

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