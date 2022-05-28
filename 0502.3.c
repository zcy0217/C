#include <stdio.h>
#include <stdlib.h>
#define password 1234
int main(void)
{
	int guess,count=1;
	
	while(count<=3)
	{
		printf("請輸入密碼:\n");
		scanf("%d",&guess);
		if(guess==password)
		{
			printf("恭喜答對\n");
			break;
		}
		else
		{
			printf("答錯第%d次\n",count);
		}
		count++;
	}

	return 0;
	}

