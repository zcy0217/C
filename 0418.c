#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char operators;
	int a,b;
	
	printf("�п�J��ӥ����\n");
	scanf("%d %d",&a,&b);
	printf("�п�J�@�ӹB�⤸\n");
	operators=getche();
	printf("\n");

	
	switch (operators)
	{
		case '+' :
		{
			printf("%d+%d=%d\n",a,b,a+b);
			break;
			}
		case '-' :
		{	
			printf("%d-%d=%d\n",a,b,a-b);
			break;
		}
		case '*' :
		{
			printf("%d*%d=%d\n",a,b,a*b);
			break;
		}
		case '/' :
		{
			printf("%d/%d=%d\n",a,b,a/b);
			break;
		}
		case '%' :
		{
			printf("%d%%%d=%d\n",a,b,a%b);
			break;
		}
		default:
		{
			printf("�B�⤸��J���~\n");
		}
	}
	 


	return 0;
	}

