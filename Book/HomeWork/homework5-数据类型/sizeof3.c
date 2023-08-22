#include <stdio.h>

int main()
{
    signed short s;     //强调signed
    unsigned short u;     //unsigned

    s = -1;
    u = -1;     //霸王硬上弓，unsigned强塞带符号的
    printf("%d\n", s);
    printf("%u\n", u);

    return 0;
}