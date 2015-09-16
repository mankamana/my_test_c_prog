#include <stdio.h>
#include <stdlib.h>
void check_endianess (unsigned char temp) 
{
    if (temp & 1) {
        printf ("\nlittle endian\n");
    } else {
        printf ("\nbig endian\n");
    }
}
void main ()
{
    unsigned char temp = 0x01;
    check_endianess (temp);
      int x = 1;

        char *y = (char*)&x;

          printf("%d\n",*y);
    return;
}
