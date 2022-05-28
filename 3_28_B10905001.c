#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float C,F;
	int a,b,c,d,e,f;
	
	printf("----------1----------\n");
	printf("請輸入攝氏(C)溫度:\n");
	scanf("%f",&C);
	F=C*9/5+32;
	printf("華氏溫度為%f\n",F);
	
	printf("----------2----------\n");
	printf("請輸入長寬高:\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("周長:%d,表面積:%d,體積:%d\n,",4*(a+b+c),2*((a*b)+(b*c)+(a*c)),a*b*c);
	
	printf("----------3----------\n");
	printf("存入幾枚十元硬幣、五元硬幣和一元硬幣:\n");
	scanf("%d %d %d",&d,&e,&f);
	printf("總金額:%d\n",10*d+5*e+1*f);
	
	return 0;
	}

