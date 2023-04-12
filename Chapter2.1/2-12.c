#include <stdio.h>
int main()
{
    unsigned int x = 0x87654321;

    printf("A :%x\n", x&0xFF);
    printf("B :%x\n", ((x & 0xffffff00)+0x11111100)+(x&0xFF));
    printf("C :%x\n", (x & 0xffffff00)+0xFF);
    return 0;
}


