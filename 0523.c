#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//ch7 p.95 �D���j�g�k 
	int i,n,result=1;
	printf("�p��n�����h�ȡA�п�Jn����:\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		result=result*i;
	}
	
	printf("%d",result);

	return 0;
	}

