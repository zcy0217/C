#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//ch7 p.95 非遞迴寫法 
	int i,n,result=1;
	printf("計算n的階層值，請輸入n的值:\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		result=result*i;
	}
	
	printf("%d",result);

	return 0;
	}

