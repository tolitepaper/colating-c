#include<stdio.h>
#include<string.h>
void fun(char* s)
{
	int i, let = 0, num = 0, spa = 0, oth = 0, n = strlen(s);
	for (i = 0; i < n; i++)
		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
			let++;
		else if (s[i] >= '0' && s[i] <= '9')
			num++;
		else if (s[i] == ' ')
			spa++;
		else oth++;
	printf("字母: %d\n数字: %d\n空格: %d\n其他字符: %d", let, num, spa, oth);
}
int main()
{
	char s[80];
	gets(s);
	fun(s);
    return 0;
}
