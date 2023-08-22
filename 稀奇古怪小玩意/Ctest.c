#include <stdio.h>
#include <string.h>

int HW(char str[]);
int main()
{
    char str[5][80];
    int i, s = 0;

    printf("Please enter 5 string:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s",str[i]);
        if(HW(str[i]))
            s = s + 1;
    }
    printf("回文字符串有%d个",s);
}

int HW(char str[])
{
    int i;
    int L = strlen(str);

    for(i = 0; i < L / 2; i++)
        if(str[i] != str[L-i-1])
            return 0;
    return 1;
}