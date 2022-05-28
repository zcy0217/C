#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main(void)
{
	int guess,answer;
	srand(time(NULL)); //設定亂數種子 (隨時變動的因子 ex:時間)
	answer=rand()%10+1; //取亂數  可用取餘數(%)來縮小範圍 
	while(1)
	{
		printf("輸入數字(1~10):");
		scanf("%d",&guess);
		if(guess==answer)
		{
			printf("答對了\n");
			break;
		}
		else
		{
			printf("答錯了\n");
		}
	}
	
	
	
	
	

	return 0;
	}

