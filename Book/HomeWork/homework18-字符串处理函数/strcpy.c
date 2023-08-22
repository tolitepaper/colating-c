#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Original String";
    char str2[] = "New String";
    char str3[100];
    //*strcpy(目标字符数组, 原字符数组);
    //*目标字符数组长度一定要容得下原字符数组，否则会出现问题
    //*为了防止出现这种溢出情况，我们需要用到strncpy*/
    strcpy(str2, str1);//**!这个是造成溢出(显示不正确)的原因
    strcpy(str3, "Copy Successfully");

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);
    return 0;
}
