#include <stdio.h>
#include <stdlib.h>
#define password 1234
int main(void)
{
	int a,i;
	int b,reversenum=0;	
	int j,leftspace,leftword,middlespace,rightword;
	
	printf("-------------學號:B10905001-------------\n");
	printf("-------------姓名:張啟玥-------------\n");
	
	printf("-------------第一關--------------------\n");
	printf("-------------密碼驗證程式--------------\n");
	printf("-----密碼:1234，輸入次數以三次為限-----\n");
	printf("\n");
	for (i=1;i<=3;i++)
	{
		printf("請輸入四位數密碼:");
		scanf("%d",&a);
		if (password==a)
		{
			printf("密碼正確!!\n");
			printf("\n");
			break;
		}
		else
		{
			printf("密碼錯誤!!\n");
		}
		if (i==3)
		{
			printf("密碼錯誤三次，取消登入!!\n");
			printf("\n");
	
		}
	}
	
	printf("---------------第二關--------------\n");
	printf("-----------將數值反向輸出----------\n");
	printf("\n請輸入一個正整數:");
	scanf("%d",&b);
	while(b!=0)
	{
		reversenum=reversenum*10+b%10;
		b/=10; 
	}
	printf("反向輸出結果為:%d\n",reversenum);
	
	printf("---------------第三關--------------\n");
	printf("-------------輸出如下圖形----------\n");
	printf("\n");
	//abcd
	for (j=0;j<4;j++) //控制層數 
	{	
		for (leftspace=0;leftspace<j;leftspace++) //控制左邊空白
		{
			printf(" ");
			} 
		for (leftword=1;leftword>0;leftword--) //控制左邊字母
		{
			printf("%c",j+97);
			}
		for (middlespace=8;middlespace/2>j;middlespace--) //控制中間空白
		{
			printf(" ");
			}
		for (rightword=1;rightword>0;rightword--) //控制右邊字母 
		{
			printf("%c",j+97);
			} 
		printf("\n");
	}	
	//e
	printf("    e\n");
	//fghi
	for (j=5;j<9;j++) //控制層數 
	{	
		for (leftspace=3;leftspace>j-5;leftspace--) //控制左邊空白
		{
			printf(" ");
			} 
		for (leftword=1;leftword>0;leftword--) //控制左邊字母
		{
			printf("%c",j+97);
			}
		for (middlespace=1;middlespace/2<j-4;middlespace++) //控制中間空白
		{
			printf(" ");
			}
		for (rightword=1;rightword>0;rightword--) //控制右邊字母 
		{
			printf("%c",j+97);
			}
		printf("\n");
	}
	return 0;
	}

