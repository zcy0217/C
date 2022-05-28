#include <stdio.h>
#include <stdlib.h>
#define password 1234
int main(void)
{
	int i,guess;
	
	for(i=1;i<=3;i++)
	{	printf("½Ð¿é¤J±K½X:\n");
		scanf("%d",&guess);
		if (password==guess)
		{
			printf("®¥³ßµª¹ï\n");
			break;
		}
		else
		{
			printf("µª¿ùÅo\n");
		}	
	}
	return 0;
	}

