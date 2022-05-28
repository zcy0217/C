#include <stdio.h>
#include <stdlib.h>

int reversenum(int);
float mTOft(float); //公尺轉英呎
float ftTOm(float); //英呎轉公尺
float kgTOpound(float); //公斤轉英鎊
float poundTOkg(float); //英鎊轉公斤
 
int main(void)
{
	int t,i,num1,num2;
	int option,option2,option3;
	float number;
	
	printf("請輸入要運算的次數：");
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		printf("請輸入兩個要相加的整數值：");
		scanf("%d %d",&num1,&num2);
		printf("第一個數值反轉為：%d\n",reversenum(num1));
		printf("第二個數值反轉為：%d\n",reversenum(num2));
		printf("反轉數值相加為：%d\n",reversenum(num1)+reversenum(num2));
		printf("真正數值相加結果為：%d\n",num1+num2);
		printf("----------------------------------\n");
	}
	
	printf("1.重量\n2.長度\n");
	scanf("%d",&option);
	switch (option)
	{
		case 1:
			{
				printf("選擇(1)公斤轉英磅(2)英磅轉公斤\n");
				scanf("%d",&option2);
				printf("請輸入數字\n");
				scanf("%f",&number);
				switch (option2) 
				{	
					case 1:
						{
							printf("等於%f英鎊",kgTOpound(number));
							break;
						}
					case 2: 
						{
							printf("等於%f公斤",poundTOkg(number));
							break;	
						}
				}
				break;
			}
		case 2:
			{
				printf("選擇(1)公尺轉英呎(2)英呎轉公尺\n");
				scanf("%d",&option3);
				printf("請輸入數字\n");
				scanf("%f",&number);
				switch (option3)
				{
					case 1:
						{
							printf("等於%f英呎",mTOft(number));
							break;
						}
					case 2:
					{
						printf("等於%f公尺",ftTOm(number));
						break;
					}	
				}
				break;
			}
	}	
	return 0;
}

int reversenum(int x)
{	
	int num=0;
	while(x!=0)
	{
		num=num*10+x%10;
		x/=10;
	}
	return num;
}
float mTOft(float x) //公尺轉英呎
{
	return x*0.3048;
}
float ftTOm(float x) //英呎轉公尺
{
	return x/0.3048;
}
float kgTOpound(float x) //公斤轉英鎊
{
	return x/0.454;
}
float poundTOkg(float x) //英鎊轉公斤
{
	return x*0.454;
}


