#include <stdio.h>
#include <stdlib.h>

#define PASSWORD 1234 

int main(void)
{	
	int guess;
	char option;
	Top: //�]�w���ҦW 
	printf("�q�K�X:\n");
	scanf("%d",&guess);
	if (guess==PASSWORD)
	{
		printf("����F!!\n");
		}	
	else
	{
		printf("�����F!!\n");
		printf("�O�_�~��q(y/n)?\n");
		option=getche();
		if(option=='y')
		{
			//goto�Ϊk
			system("cls"); //�M���e�� 
			goto Top;
		}			
	}
	return 0;
	}

