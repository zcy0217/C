#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int guess,answer;
	int num=1,A=0,B=0,C=0,D=0,E=0,F=0;
	
	printf("----------1----------\n");
	printf("�Z��:AI�G\n�Ǹ�:B10905001\n�m�W:�i�Ҫ�\n");
	
	printf("----------2----------\n");
	srand(time(NULL));
	answer=rand()%10+1; 
	while(1)
	{
		printf("��J�Ʀr(1~10):");
		scanf("%d",&guess);
		if(guess==answer)
		{
			printf("����F!!\n");
			break;
		}
		else
		{
			printf("�����F!!\n");
		}
	}
	
	printf("----------3----------\n");
	printf("�Կ�H���X�p�U:\nA:�Կ�H���X1\nB:�Կ�H���X2\nC:�Կ�H���X3\nD:�Կ�H���X4\nE:�Կ�H���X5\nF:�Կ�H���X6\n");
	printf("~~~~~�}�l�벼~~~~~\n");
	while (num!=0)
	{
		printf("�п�J�벼���X(1~6,0�N��벼����!):");
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
				printf("�L���Կ�H���X!!\n");
			}
		}
		printf("\n");
		printf("�Կ�HA������:%d\n",A);
		printf("�Կ�HB������:%d\n",B);
		printf("�Կ�HC������:%d\n",C);
		printf("�Կ�HD������:%d\n",D);
		printf("�Կ�HE������:%d\n",E);
		printf("�Կ�HF������:%d\n",F);

	return 0;
	}

