#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int guess,answer;
	int num=1,A=0,B=0,C=0,D=0,E=0,F=0;
	
	printf("----------1----------\n");
	printf("班級:AI二\n學號:B10905001\n姓名:張啟玥\n");
	
	printf("----------2----------\n");
	srand(time(NULL));
	answer=rand()%10+1; 
	while(1)
	{
		printf("輸入數字(1~10):");
		scanf("%d",&guess);
		if(guess==answer)
		{
			printf("答對了!!\n");
			break;
		}
		else
		{
			printf("答錯了!!\n");
		}
	}
	
	printf("----------3----------\n");
	printf("候選人號碼如下:\nA:候選人號碼1\nB:候選人號碼2\nC:候選人號碼3\nD:候選人號碼4\nE:候選人號碼5\nF:候選人號碼6\n");
	printf("~~~~~開始投票~~~~~\n");
	while (num!=0)
	{
		printf("請輸入投票號碼(1~6,0代表投票結束!):");
		scanf("%d",&num);
		switch(num)
		{
			case 1:
				A++;
				break;
			case 2:
				B++;
				break;
			case 3:
				C++;
				break;
			case 4:
				D++;
				break;
			case 5:
				E++;
				break;
			case 6:
				F++;
				break;
			case 0:
				break;
			default:
				printf("無此候選人號碼!!\n");
			}
		}
		printf("\n");
		printf("候選人A的票數:%d\n",A);
		printf("候選人B的票數:%d\n",B);
		printf("候選人C的票數:%d\n",C);
		printf("候選人D的票數:%d\n",D);
		printf("候選人E的票數:%d\n",E);
		printf("候選人F的票數:%d\n",F);

	return 0;
	}

