#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int password=1234,newpassword,comfirmpassword;
	int guess,count=1,choose,balance=10000,save,pick;
	char option;
	
	Top:
	while(count<4)
	{
		printf("�п�J�K�X:");
		scanf("%d",&guess);		
		if(guess==password)
		{
			break;
		}
		else
		{	
			printf("�K�X��J���~%d��!!",count);
			getche();
			if (count<=2)
			{
				system("cls");
			}
			count+=1;
		}
		
	if (count==4)
	{
		printf("\n�K�X���ҶW�L3���AByeBye!!\n\nbyebye!!");
			}		
	}
	if (count<4)
	{
		system("cls");
		printf("1. �d�߾l�B\n2. �s�ڪ��B\n3. ���ڪ��B\n4. �K�X�ܧ�\n�п�J����z����(1~4)�G");
		scanf("%d",&choose);
		system("cls");
		switch(choose)
		{
			case 1:
				printf("�b��l�B:%d��\n",balance);
				printf("�O�_�~��ާ@(y/n)?");
				option=getche();
				if (option=='y')
				{
					system("cls");
					goto Top;
				}
				if (option=='n')
				{
					printf("\nbyebye!!");
				}
				break;
			case 2:
				printf("�п�J�s�ڪ��B:");
				scanf("%d",&save);
				balance+=save; 
				printf("�b��l�B:%d��\n",balance);
				printf("�O�_�~��ާ@(y/n)?");
				option=getche();
				if (option=='y')
				{
					system("cls");
					goto Top;
				}
				if (option=='n')
				{
					printf("\nbyebye!!");
				}
				break;
			case 3:
				printf("�п�J���ڪ��B:");
				scanf("%d",&pick);
				balance-=pick; 
				printf("�b��l�B:%d��\n",balance);
				printf("�O�_�~��ާ@(y/n)?");
				option=getche();
				if (option=='y')
				{
					system("cls");
					goto Top;
				}
				if (option=='n')
				{
					printf("\nbyebye!!");
				}
				break;			
			case 4:
				printf("�п�J�s���|��ƱK�X:");
				scanf("%d",&newpassword);
				printf("�нT�{�s���|��ƱK�X:");
				scanf("%d",&comfirmpassword);
				if (newpassword=comfirmpassword)
				{
					printf("�K�X��粒��!!");
					password=newpassword;
					getche();
					system("cls");
					goto Top;
				}
				else
				{
					printf("�T�{�K�X���~!!�Э��s�ާ@!!");
					getche();
					system("cls");
					goto Top;
				}
				break;
		}
	}
	return 0;
	}
