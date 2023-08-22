#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 32
#define MAX_USER 256
 struct users
{
    char name[32];      
    char id[32];        
    char tel[16];       
    char address[64];   
    char info[MAX][32];
} users;

struct newspaper  
{
     char id[32];        
    char name[32];      
    char publisher[32]; 
    int circular;       
    double price;      
    char intro[128];    
    char code[32];      
} newspaper[MAX_USER];
void add();
void total();
void del();
void show();
void lnsert();
int subNum=0;
void Menu();

int main()

	

	{
int i;
    do
	{
		Menu();
		scanf("%d", &i);

		switch (i)
		{
		case 1:
			add();
			break;
		case 2:
			total();
			break;
		case 3:
			del();
			break;
		case 4:
			show();
			break;
		case 5:
		 lnsert();
			break;
		case 6:
			printf("\n您选择退出该程序\n");
			break;
		}

	} while (i != 6);
}

  


  
void  Menu()
{
	printf("\n");
	system("pause");
	system("cls");
	printf("\n");
	printf("\t\t\t--------------------------");
	printf("\t\t\t*                        *\n");
	printf("\t\t\t*     报刊订阅系统       *\n");
	printf("\t\t\t*   [1]录入新用户        *\n");
	printf("\t\t\t*   [2]录入报刊信息      *\n");
	printf("\t\t\t*   [3]订阅报刊          *\n");
	printf("\t\t\t*   [4]查询订阅信息      *\n");
	printf("\t\t\t*   [5]统计销售情况      *\n");
	printf("\t\t\t*   [6]退出该程序        *\n");
	printf("\t\t\t--------------------------");
}
void add()
{
     int i;
    printf("请输入姓名：");
    
    scanf("%s",users.name);
    printf("请输入身份证号码：");
    scanf("%s",users.id);
    printf("请输入联系电话：");
    scanf("%s",users.tel);
    printf("请输入联系地址：");
    scanf("%s",users.address);

    for(i = 0; i < 32; i++)
    {
        strcpy(users.info[i], "");
    }
}
void total()
{
	
	int n;
  fflush(stdin);
    printf("录入报刊信息\n");
    printf("输入报刊代号：");
    scanf("%s",&newspaper[n].id);
    printf("输入报刊名称：");
    scanf("%s",&newspaper[n].name);
    printf("输入出版报社：");
    scanf("%s",&newspaper[n].publisher);
    printf("输入出版周期：");
    scanf("%d", &newspaper[n].circular);
    printf("输入季度报价：");
    scanf("%lf", &newspaper[n].price);
     fflush(stdin);
    printf("输入内容介绍：");
    scanf("%s",&newspaper[n].intro);
    printf("输入分类编号：");
    scanf("%s",&newspaper[n].code);
   n++;
}
void del()
{
    char id[32];
    int i,n=32;
    double bill=0;
    fflush(stdin);
    printf("订阅报刊\n");
    printf("输入需要订阅的报刊代号：");
    gets(id);  

    for(i = 0; i < n; i++)
    {
        if(strcmp(newspaper[i].id, id) == 0)
        {
            strcpy(users.info[subNum++], id);
            bill += newspaper[i].price;
            printf("订阅成功！");
            break;
        }
    }
}
void show()
{
    int i, j,n=32;

    printf("您的全部订阅报刊\n");

    printf("%8s%8s%8s%8s%8s%8s%8s\n",
           "代号",
           "名称",
           "出版",
           "周期",
           "报价",
           "介绍",
           "编号");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < subNum; j++)
        {
            if(strcmp(newspaper[i].id, users.info[j]) == 0)
            {
                printf("%8s%8s%8s%8d%8.2f%8s%8s\n",
                       newspaper[i].id,
                       newspaper[i].name,
                       newspaper[i].publisher,
                       newspaper[i].circular,
                       newspaper[i].price,
                       newspaper[i].intro,
                       newspaper[i].code);
            }
        }
    }
}
void lnsert()
{
    int i,n=32;

    printf("销售情况\n");
    printf("%8s%8s%8s%8s%8s%8s%8s\n",
           "代号",
           "名称",
           "出版",
           "周期",
           "报价",
           "介绍",
           "编号");
    for(i = 0; i < n; i++)
    {
        printf("%8s%8s%8s%8d%8.2f%8s%8s\n",
               newspaper[i].id,
               newspaper[i].name,
               newspaper[i].publisher,
               newspaper[i].circular,
               newspaper[i].price,
               newspaper[i].intro,
               newspaper[i].code);
    }
}
