#include<stdio.h>

int main(void)

{FILE *pf; 

 char *s1="China",*s2="Beijing"; 

 pf=fopen("abc.dat","wb+"); 

 fwrite(s2,7,1,pf); 

 rewind(pf); /*文件位置指针回到文件开头*/ 

 fwrite(s1,5,1,pf); 

 fclose(pf);

 return 0;
}