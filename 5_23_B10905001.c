#include <stdio.h>
#include <stdlib.h>

int abs(int);
int square(int);
int Ackermann(int,int);
void multiple(int);

int main(void)
{
	int FibIndex,FibValue,i,prev1=0,prev2=1,FibAns=0;
	int num,a,b;
	int m,n;
	int multiplenum;
	
	printf("---------------------1----------------------\n");
	printf("-----利用非遞迴方式求解fibonacci number-----\n");
	printf("--------------------------------------------\n");
	printf("輸入fib(n)的n值:");
	scanf("%d",&FibIndex);
	if (FibIndex==0)
	{
		printf("fib(%d)=0",FibIndex);
	}
	else if (FibIndex==1)
	{
		printf("fib(%d)=1",FibIndex);
	}
	else
	{
		for (i=0;i<FibIndex-1;i++)
		{
			FibAns=prev1+prev2;
			prev1=prev2;
			prev2=FibAns;
		}	
		printf("fib(%d)=%d",FibIndex,FibAns);
	}
	
	printf("\n\n\n");
	printf("---------------------2----------------------\n");
	printf("----設計函數求任一整數值的絕對值與平方值----\n");
	printf("---使用int abs(int); and int square(int);---\n");
	printf("--------------------------------------------\n");
	printf("請輸入一個整數值:");
	scanf("%d",&num);
	printf("%d的絕對值為:%d\n%d的平方值為:%d",num,abs(num),num,square(num));

	printf("\n\n\n");
	printf("---------------------3----------------------\n");
	printf("----------求解Ackermann's function----------\n");
	printf("          A(m,n)=n+1,             if m=0\n");
	printf("                =A(m-1,1),        if n=0\n");
	printf("                =A(m-1,A(m,n-1)), otherwise\n");
	printf("--------------------------------------------\n");
	printf("輸入m之整數值:");
	scanf("%d",&m);
	printf("\n輸入n之整數值:");
	scanf("%d",&n);
	printf("A(%d,%d)=%d",m,n,Ackermann(m,n));
	
	printf("\n\n\n");
	printf("---------------------4----------------------\n");
	printf("---寫一個函式，找出整數n以內的所有正整數中，------\n");
	printf("---是5或7的倍數的所有數值。-----------------\n");
	printf("--------------------------------------------\n");
	printf("輸入n之整數值:");
	scanf("%d",&multiplenum);
	multiple(multiplenum);
	
	return 0;
	}

int abs(int a)
{
	if (a>0)
	{
		return a;
	}
	else
	{
		return -a;
	}
}
int square(int b)
{
	return b*b;
}

int Ackermann(int c,int d)
{
	if (c==0)
        return d+1;
    else if (d==0)
        return Ackermann(c-1,1);
    else
        return Ackermann(c-1,Ackermann(c,d-1));
}

void multiple(int M)
{
	int e;
	
	for (e=1;e<M+1;e++)
	{
		if ((e%5==0) || (e%7==0))
		{
			printf("%d ",e);
		}
	}
	
}
