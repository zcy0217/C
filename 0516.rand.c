#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main(void)
{
	int guess,answer;
	srand(time(NULL)); //�]�w�üƺؤl (�H���ܰʪ��]�l ex:�ɶ�)
	answer=rand()%10+1; //���ü�  �i�Ψ��l��(%)���Y�p�d�� 
	while(1)
	{
		printf("��J�Ʀr(1~10):");
		scanf("%d",&guess);
		if(guess==answer)
		{
			printf("����F\n");
			break;
		}
		else
		{
			printf("�����F\n");
		}
	}
	
	
	
	
	

	return 0;
	}

