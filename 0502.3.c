#include <stdio.h>
#include <stdlib.h>
#define password 1234
int main(void)
{
	int guess,count=1;
	
	while(count<=3)
	{
		printf("�п�J�K�X:\n");
		scanf("%d",&guess);
		if(guess==password)
		{
			printf("���ߵ���\n");
			break;
		}
		else
		{
			printf("������%d��\n",count);
		}
		count++;
	}

	return 0;
	}

