#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define plus(A,B) A+B
#define minus(A,B) A-B
#define multiplied(A,B) A*B
#define divided(A,B) (float)A/B

void hanoi(int,char,char,char);
int my_pow(int,int);

int main(void)
{
	int i,count;
	float startclock,endclock;
	int x,r,a,b;
	
	printf("學號:B10905001\n姓名:張啟玥\n");
	printf("-----------Hanoi Tower Function Extension--------\n-------------------------------------------------\n");
	printf("請輸入套環個數:");
	scanf("%d",&i);
	count=pow(2,i)-1;
	startclock=clock();
	hanoi(i,'A','B','C');
	endclock=clock();
	printf("\n總共搬移了%d次！\n",count);
	printf("花了%g秒\n",(endclock-startclock)/CLK_TCK);
	
	printf("------輸入底數和次方兩個數值，並計算指數值--------\n");
	printf("------請使用函式的方式建構指數計算，如：my_pow()--\n");
	printf("請輸入兩個數字：\n");
	printf("x=");
	scanf("%d",&x);
	printf("r=");
	scanf("%d",&r);	
	printf("%d的%d次方=%d\n",x,r,my_pow(x,r));
	
	printf("-----以巨集定義整數x,y的加減乘除，由鍵盤輸入x,y值--\n");
	printf("-----求 x+y, x-y, x*y, x/y 之值--------------------\n");
	printf("請輸入x=");
	scanf("%d",&a);
	printf("請輸入y=");
	scanf("%d",&b);
	printf("x+y=%d\nx-y=%d\nx*y=%d\nx/y=%f",plus(a,b),minus(a,b),multiplied(a,b),divided(a,b));
	return 0;
	}

void hanoi(int i,char begin,char mid,char dest)
{
	int count=0;
	if (i==1)
		printf("套環%d從[%c]移到[%c]\n",i,begin,dest);
	else
	{
		hanoi(i-1,begin,dest,mid);
		printf("套環%d從[%c]移到[%c]\n",i,begin,dest);
			hanoi(i-1,mid,begin,dest);
	}
}
int my_pow(int X,int R)
{
	return pow(X,R);
 } 
