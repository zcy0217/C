#include <stdio.h>
#include <stdlib.h>
#define password 1234
int main(void)
{
	int i,guess;
	
	for(i=1;i<=3;i++)
	{	printf("�п�J�K�X:\n");
		scanf("%d",&guess);
		if (password==guess)
		{
			printf("���ߵ���\n");
			break;
		}
		else
		{
			printf("�����o\n");
		}	
	}
	return 0;
	}

