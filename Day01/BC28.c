#include <stdio.h>
int main()
{
    int ch = 0;
    while((ch = getchar()) != EOF)
    {
        putchar(ch + 32);
        //吸收\n
        //getchar读取的是缓冲区
        printf("\n");
        getchar();
    }
}