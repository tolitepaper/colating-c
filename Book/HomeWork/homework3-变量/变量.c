#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;

    a = 520;
    b = 'F';
    c = 3.14;
    d = 3.141592653;

    printf("今天不是%d\n", a);
    printf("我爱吃%cish\n", b);
    printf("常用圆周率取值为%.2f\n", c);
    printf("精确到圆周率后九位是%11.9f\n", d);

    return 0;
}
