#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=3,b=2;
	int f1;
	float f2;
	float answer;
	int c=95,d=74,e=81;
	float f;
	int g=10,h=20,i=30;
	int temp;
	
	printf("�Ǹ�:B10905001\n");
	
	printf("�i�Ҫ�\n");
		
	printf("1.%d+%d���M��%d\n",a,b,a+b);
	
	answer=(float)a/b;
	printf("2.%d/%d���Ӭ�%f\n",a,b,answer);
	
	f1=1*2*3*4*5;
	f2=(float)5*2+1.0/10;
	printf("3.f1=1*2*3*4*5=%d\n",f1);
	printf("4.f2=5*2+1.0/10=%f\n",f2);
	
	f=(float)(95+74+81)/3;
	printf("5.95,74,81�������Ȭ�%f\n",f);

	printf("6.�洫�e:a=%d b=%d c=%d\n",g,h,i);
	temp=g;
	g=i;
	i=h;
	h=temp;
	printf("  �洫��:a=%d b=%d c=%d\n",g,h,i);
	
	return 0;
	}

