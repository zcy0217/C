#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int start,end,i,count=0;
	char option;
	
	Top:
	printf("�п�J�_�l��:");
	scanf("%d",&start);
	printf("�п�J�פ��:");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		if(i%3==0||i%5==0)
		{
			printf("%d ",i);
			count++;
		}	
	}
	printf(",�@%d��\n",count);
	printf("�O�_�~��ϥ�(y/n):");
	option=getche();
	if(option=='y')
	{
		system("cls"); 
		goto Top;
	}
	else
	{
		printf("\n�C������");
	}
	return 0;
	}

