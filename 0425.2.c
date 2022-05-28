#include <stdio.h>
#include <stdlib.h>

#define PASSWORD 1234 

int main(void)
{	
	int guess;
	char option;
	Top: //設定標籤名 
	printf("猜密碼:\n");
	scanf("%d",&guess);
	if (guess==PASSWORD)
	{
		printf("答對了!!\n");
		}	
	else
	{
		printf("答錯了!!\n");
		printf("是否繼續猜(y/n)?\n");
		option=getche();
		if(option=='y')
		{
			//goto用法
			system("cls"); //清除畫面 
			goto Top;
		}			
	}
	return 0;
	}

