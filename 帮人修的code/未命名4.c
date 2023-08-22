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
			printf("\n��ѡ���˳��ó���\n");
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
	printf("\t\t\t*     ��������ϵͳ       *\n");
	printf("\t\t\t*   [1]¼�����û�        *\n");
	printf("\t\t\t*   [2]¼�뱨����Ϣ      *\n");
	printf("\t\t\t*   [3]���ı���          *\n");
	printf("\t\t\t*   [4]��ѯ������Ϣ      *\n");
	printf("\t\t\t*   [5]ͳ���������      *\n");
	printf("\t\t\t*   [6]�˳��ó���        *\n");
	printf("\t\t\t--------------------------");
}
void add()
{
     int i;
    printf("������������");
    
    scanf("%s",users.name);
    printf("���������֤���룺");
    scanf("%s",users.id);
    printf("��������ϵ�绰��");
    scanf("%s",users.tel);
    printf("��������ϵ��ַ��");
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
    printf("¼�뱨����Ϣ\n");
    printf("���뱨�����ţ�");
    scanf("%s",&newspaper[n].id);
    printf("���뱨�����ƣ�");
    scanf("%s",&newspaper[n].name);
    printf("������汨�磺");
    scanf("%s",&newspaper[n].publisher);
    printf("����������ڣ�");
    scanf("%d", &newspaper[n].circular);
    printf("���뼾�ȱ��ۣ�");
    scanf("%lf", &newspaper[n].price);
     fflush(stdin);
    printf("�������ݽ��ܣ�");
    scanf("%s",&newspaper[n].intro);
    printf("��������ţ�");
    scanf("%s",&newspaper[n].code);
   n++;
}
void del()
{
    char id[32];
    int i,n=32;
    double bill=0;
    fflush(stdin);
    printf("���ı���\n");
    printf("������Ҫ���ĵı������ţ�");
    gets(id);  

    for(i = 0; i < n; i++)
    {
        if(strcmp(newspaper[i].id, id) == 0)
        {
            strcpy(users.info[subNum++], id);
            bill += newspaper[i].price;
            printf("���ĳɹ���");
            break;
        }
    }
}
void show()
{
    int i, j,n=32;

    printf("����ȫ�����ı���\n");

    printf("%8s%8s%8s%8s%8s%8s%8s\n",
           "����",
           "����",
           "����",
           "����",
           "����",
           "����",
           "���");
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

    printf("�������\n");
    printf("%8s%8s%8s%8s%8s%8s%8s\n",
           "����",
           "����",
           "����",
           "����",
           "����",
           "����",
           "���");
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
