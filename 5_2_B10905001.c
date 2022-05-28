#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int start,end,i,count=0;
	char option;
	
	Top:
	printf("請輸入起始值:");
	scanf("%d",&start);
	printf("請輸入終止值:");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		if(i%3==0||i%5==0)
		{
			printf("%d ",i);
			count++;
		}	
	}
	printf(",共%d個\n",count);
	printf("是否繼續使用(y/n):");
	option=getche();
	if(option=='y')
	{
		system("cls"); 
		goto Top;
	}
	else
	{
		printf("\n遊戲結束");
	}
	return 0;
	}

