
#include <stdio.h>    /* for printf(), perror()...   */
#include <stdlib.h>   /* for malloc()                */
#include <errno.h>    /* for errno                   */
// #include "crc.h"      /* for crc()                   */
// #include "zutil.h"    /* for mem_def() and mem_inf() */
// #include "lab_png.h"  /* simple PNG data structures  */

int main (int argc, char **argv) {
    int i;

    printf("A complete list of command line arguments:\n");
    for (i = 0; i < argc; i++) {
        printf("argv[%d]=%s\n", i, argv[i]);
    }
    return 0;
}