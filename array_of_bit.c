#include <stdio.h>
#include <stdlib.h>
#define MAX_ID 1000
#define BYTE_LENGTH 8
#define INT_SIZE 4
#define WORD_LENGTH (BYTE_LENGTH * INT_SIZE)
#define BITMAP_MAX_INDEX (MAX_ID / WORD_LENGTH)

int bitmap_id[BITMAP_MAX_INDEX + 1] = {0};

int generate_id () 
{


}

void main () 
{
}
