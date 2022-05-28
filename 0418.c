#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char operators;
	int a,b;
	
	printf("請輸入兩個正整數\n");
	scanf("%d %d",&a,&b);
	printf("請輸入一個運算元\n");
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
			printf("運算元輸入錯誤\n");
		}
	}
	 


	return 0;
	}

