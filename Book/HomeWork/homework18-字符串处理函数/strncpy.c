#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "To be or not to be";
    char str2[40];

    //**?多出来的参数是为了限制拷贝过去的长度
    strncpy(str2, str1, 5);//**限制拷贝5个字符(不包含结束符)
    //然而strncpy也不会在后面自动追加一个结束符，所以这里要再给他加上
    str2[5] = '\0';

//**!这里要用%s字符串输出而不是%d整形输出
    printf("str2: %s\n", str2);

    return 0;
}
