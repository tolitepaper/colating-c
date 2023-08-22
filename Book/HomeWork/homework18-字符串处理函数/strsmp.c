#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "Colating";
    char str2[] = "Colating";

    if (!strcmp(str1, str2))
    {
        printf("两个字符串完全一致\n");
    }
    else
    {
        printf("两个字符串存在差异\n");
    }

    return 0;
}

//*strncmp这个函数是增加一个参数来指定只对比前面的n个字符