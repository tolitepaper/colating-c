#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
main()
{
char a[102][102],b[102][102],c[102][102],w;
int i,j; /*循环变量*/
int x,y,z[999]; /*雷的位置*/
int t,s; /*标记*/
int m,n,lei; /*计数*/
int u,v; /*输入*/
int hang,lie,shu,choice; /*自定义*/
srand((int)time(NULL));
h:
/*选择模式*/
system("title C语言版扫雷游戏---(有残缺)");
printf(" \n");                                  /*美化代码*/ 
printf(" \n");                                  /*美化代码*/ 
printf(" \n");                                  /*美化代码*/ 
printf(" \n");                                  /*美化代码*/ 
printf(" \n");                                  /*美化代码*/ 
printf(" \n");                                  /*美化代码*/ 
printf(" \n");                                  /*美化代码*/ 
printf(" \n");                                  /*美化代码*/ 
printf(" \n");
printf("                                           |-------------------------|\n");
printf("                                           |  本软件由惠普森美化     |\n");
printf("                                           |                         |\n");
printf("                                           |  请选择游戏方式         |\n");
printf("                                           |                         |\n");
printf("                                           |  1.标准模式             |\n");
printf("                                           |  2.自定义模式           |\n");
printf("                                           |                         |\n");
printf("                                           |欢迎添加惠普QQ讨论:      |\n");
printf("                                           |1941341976               |\n");
printf("                                           |-------------------------|\n");

scanf("%d",&choice);
if(choice==2)
{
do
{
t=0;
printf("请输入\n行数 列数 雷的个数\n");
scanf("%d%d%d",&hang,&lie,&shu);
if(hang<2)
{
printf("行数太少\n");
t=1;
}
if(hang>100)
{
printf("行数太多\n");
t=1;
}
if(lie<2)
{
printf("列数太少\n");
t=1;
}
if(lie>100)
{
printf("列数太多\n");
t=1;
}
if(shu<1)
{
printf("至少要有一个雷\n");
t=1;
}
if(shu>=(hang*lie))
{
printf("雷太多了\n");
t=1;
}
}
while(t==1);
}
else
{
hang=10,lie=10,shu=10;
}
/*确定雷的位置*/
for(i=1;i<=shu;i=i+1)
{
do
{
t=0;
z[i]=rand()%(hang*lie);
for(j=1;j<i;j=j+1)
{
if(z[i]==z[j])
t=1;
}
}
while(t==1);
}
/*初始化a,b,c*/
for(i=0;i<=hang+1;i=i+1)
{
for(j=0;j<=lie+1;j=j+1)
{
a[i][j]='1';
b[i][j]='1';
c[i][j]='0';
}
}
for(i=1;i<=hang;i=i+1)
{
for(j=1;j<=lie;j=j+1)
{
a[i][j]='+';
}
}
/*把雷放入c*/
for(i=1;i<=shu;i=i+1)
{
x=z[i]/lie+1;
y=z[i]%lie+1;
c[x][y]='#';
}
/*计算b中数字*/
for(i=1;i<=hang;i=i+1)
{
for(j=1;j<=lie;j=j+1)
{
m=48;
if(c[i-1][j-1]=='#')
m=m+1;
if(c[i][j-1]=='#')
m=m+1;
if(c[i-1][j]=='#')
m=m+1;
if(c[i+1][j+1]=='#')
m=m+1;
if(c[i][j+1]=='#')
m=m+1;
if(c[i+1][j]=='#')
m=m+1;
if(c[i+1][j-1]=='#')
m=m+1;
if(c[i-1][j+1]=='#')
m=m+1;
b[i][j]=m;
}
}
/*把雷放入b中*/
for(i=1;i<=shu;i=i+1)
{
x=z[i]/lie+1;
y=z[i]%lie+1;
b[x][y]='#';
}
/*游戏设计*/
lei=shu;
do
{
g:
/*输出*/
printf(" ");
for(i=1;i<=lie;i=i+1)
{
w=(i-1)/10+48;
printf("%c",w);
w=(i-1)%10+48;
printf("%c ",w);
}
printf("\n |");
for(i=1;i<=lie;i=i+1)
{
printf("---|");
}
printf("\n");
for(i=1;i<=hang;i=i+1)
{
w=(i-1)/10+48;
printf("%c",w);
w=(i-1)%10+48;
printf("%c |",w);
for(j=1;j<=lie;j=j+1)
{
if(a[i][j]=='0')
printf(" |");
else
printf(" %c |",a[i][j]);
}
if(i==2)
printf(" 剩余雷个数");
if(i==3)
printf(" %d",lei);
printf("\n |");
for(j=1;j<=lie;j=j+1)
{
printf("---|");
}
printf("\n");
}
/*输入*/
scanf("%d%c%d",&u,&w,&v);
u=u+1,v=v+1;
if(w!='#'&&a[u][v]=='f')
goto g;
if(w=='#')
{
if(a[u][v]=='+')
{
a[u][v]='f';
lei=lei-1;
}
else if(a[u][v]=='f')
{
a[u][v]='?';
lei=lei+1;
}
else if(a[u][v]=='?')
{
a[u][v]='+';
}
goto g;
}
a[u][v]=b[u][v];
/*打开0区*/
f:
t=0;
if(a[u][v]=='0')
{
for(i=1;i<=hang;i=i+1)
{
for(j=1;j<=lie;j=j+1)
{
s=0;
if(a[i-1][j-1]=='0')
s=1;
if(a[i-1][j+1]=='0')
s=1;
if(a[i-1][j]=='0')
s=1;
if(a[i+1][j-1]=='0')
s=1;
if(a[i+1][j+1]=='0')
s=1;
if(a[i+1][j]=='0')
s=1;
if(a[i][j-1]=='0')
s=1;
if(a[i][j+1]=='0')
s=1;
if(s==1)
a[i][j]=b[i][j];
}
}
for(i=1;i<=hang;i=i+1)
{
for(j=lie;j>=1;j=j-1)
{
s=0;
if(a[i-1][j-1]=='0')
s=1;
if(a[i-1][j+1]=='0')
s=1;
if(a[i-1][j]=='0')
s=1;
if(a[i+1][j-1]=='0')
s=1;
if(a[i+1][j+1]=='0')
s=1;
if(a[i+1][j]=='0')
s=1;
if(a[i][j-1]=='0')
s=1;
if(a[i][j+1]=='0')
s=1;
if(s==1)
a[i][j]=b[i][j];
}
}
for(i=hang;i>=1;i=i-1)
{
for(j=1;j<=lie;j=j+1)
{
s=0;
if(a[i-1][j-1]=='0')
s=1;
if(a[i-1][j+1]=='0')
s=1;
if(a[i-1][j]=='0')
s=1;
if(a[i+1][j-1]=='0')
s=1;
if(a[i+1][j+1]=='0')
s=1;
if(a[i+1][j]=='0')
s=1;
if(a[i][j-1]=='0')
s=1;
if(a[i][j+1]=='0')
s=1;
if(s==1)
a[i][j]=b[i][j];
}
}
for(i=hang;i>=1;i=i-1)
{
for(j=lie;j>=1;j=j-1)
{
s=0;
if(a[i-1][j-1]=='0')
s=1;
if(a[i-1][j+1]=='0')
s=1;
if(a[i-1][j]=='0')
s=1;
if(a[i+1][j-1]=='0')
s=1;
if(a[i+1][j+1]=='0')
s=1;
if(a[i+1][j]=='0')
s=1;
if(a[i][j-1]=='0')
s=1;
if(a[i][j+1]=='0')
s=1;
if(s==1)
a[i][j]=b[i][j];
}
}
/*检测0区*/
for(i=1;i<=hang;i=i+1)
{
for(j=1;j<=lie;j=j+1)
{
if(a[i][j]=='0')
{
if(a[i-1][j-1]=='+'||a[i-1][j-1]=='f'||a[i-1][j-1]=='?')
t=1;
if(a[i-1][j+1]=='+'||a[i-1][j+1]=='f'||a[i-1][j+1]=='?')
t=1;
if(a[i+1][j-1]=='+'||a[i+1][j-1]=='f'||a[i+1][j-1]=='?')
t=1;
if(a[i+1][j+1]=='+'||a[i+1][j+1]=='f'||a[i+1][j+1]=='?')
t=1;
if(a[i+1][j]=='+'||a[i+1][j]=='f'||a[i+1][j]=='?')
t=1;
if(a[i][j+1]=='+'||a[i][j+1]=='f'||a[i][j+1]=='?')
t=1;
if(a[i][j-1]=='+'||a[i][j-1]=='f'||a[i][j-1]=='?')
t=1;
if(a[i-1][j]=='+'||a[i-1][j]=='f'||a[i-1][j]=='?')
t=1;
}
}
}
if(t==1)
goto f;
}
/*检查结束*/
n=0;
for(i=1;i<=hang;i=i+1)
{
for(j=1;j<=lie;j=j+1)
{
if(a[i][j]!='+'&&a[i][j]!='f'&&a[i][j]!='?')
n=n+1;
}
}
}
while(a[u][v]!='#'&&n!=(hang*lie-shu));
/*游戏结束*/
for(i=1;i<=shu;i=i+1)
{
x=z[i]/lie+1;
y=z[i]%lie+1;
a[x][y]='#';
}
printf(" ");
for(i=1;i<=lie;i=i+1)
{
w=(i-1)/10+48;
printf("%c",w);
w=(i-1)%10+48;
printf("%c ",w);
}
printf("\n |");
for(i=1;i<=lie;i=i+1)
{
printf("---|");
}
printf("\n");
for(i=1;i<=hang;i=i+1)
{
w=(i-1)/10+48;
printf("%c",w);
w=(i-1)%10+48;
printf("%c |",w);
for(j=1;j<=lie;j=j+1)
{
if(a[i][j]=='0')
printf(" |");
else
printf(" %c |",a[i][j]);
}
/*if(i==2)
printf(" 剩余雷个数");
if(i==3)
printf(" %d",lei);*/
printf("\n |");
for(j=1;j<=lie;j=j+1)
{
printf("---|");
}
printf("\n");
}
if(n==(hang*lie-shu))
printf("success!\n");
else
printf("game over!\n");
printf("重玩请输入1\n");
t=0;
scanf("%d",&t);
if(t==1)
goto h;
}