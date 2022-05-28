#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int a,b,c;

	printf("-----------------1-----------------\n");
	printf("請輸入兩個整數\n");
	scanf("%d %d",&a,&b);
	printf("合:%d，差:%d，積:%d，商:%.2f\n",a+b,a-b,a*b,(float)a/b);
	
	printf("-----------------2-----------------\n");
	printf("請輸入一個整數\n");
	scanf("%d",&c);
	printf("8進位:%o，16進位:%x",c,c);
	
	getche();
	return 0;
	}

