#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int a,b,c;

	printf("-----------------1-----------------\n");
	printf("�п�J��Ӿ��\n");
	scanf("%d %d",&a,&b);
	printf("�X:%d�A�t:%d�A�n:%d�A��:%.2f\n",a+b,a-b,a*b,(float)a/b);
	
	printf("-----------------2-----------------\n");
	printf("�п�J�@�Ӿ��\n");
	scanf("%d",&c);
	printf("8�i��:%o�A16�i��:%x",c,c);
	
	getche();
	return 0;
	}

