#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float C,F;
	int a,b,c,d,e,f;
	
	printf("----------1----------\n");
	printf("�п�J���(C)�ū�:\n");
	scanf("%f",&C);
	F=C*9/5+32;
	printf("�ؤ�ū׬�%f\n",F);
	
	printf("----------2----------\n");
	printf("�п�J���e��:\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("�P��:%d,���n:%d,��n:%d\n,",4*(a+b+c),2*((a*b)+(b*c)+(a*c)),a*b*c);
	
	printf("----------3----------\n");
	printf("�s�J�X�T�Q���w���B�����w���M�@���w��:\n");
	scanf("%d %d %d",&d,&e,&f);
	printf("�`���B:%d\n",10*d+5*e+1*f);
	
	return 0;
	}

