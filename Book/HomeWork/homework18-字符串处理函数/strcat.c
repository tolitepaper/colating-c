#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "I love";
    char str2[] = "Colating";

    strcat(str1, " ");
    strcat(str1, str2);

    printf("str1: %s\n", str1);

    return 0;
}

//*strncat也是添加了一个函数限制了复制过去的长度
//*不过与strcat不同的是strncat总是会在连接后面自动追加一个结束符[\0]
