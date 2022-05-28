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
	printf("-----�Q�ΫD���j�覡�D��fibonacci number-----\n");
	printf("--------------------------------------------\n");
	printf("��Jfib(n)��n��:");
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
	printf("----�]�p��ƨD���@��ƭȪ�����ȻP�����----\n");
	printf("---�ϥ�int abs(int); and int square(int);---\n");
	printf("--------------------------------------------\n");
	printf("�п�J�@�Ӿ�ƭ�:");
	scanf("%d",&num);
	printf("%d������Ȭ�:%d\n%d������Ȭ�:%d",num,abs(num),num,square(num));

	printf("\n\n\n");
	printf("---------------------3----------------------\n");
	printf("----------�D��Ackermann's function----------\n");
	printf("          A(m,n)=n+1,             if m=0\n");
	printf("                =A(m-1,1),        if n=0\n");
	printf("                =A(m-1,A(m,n-1)), otherwise\n");
	printf("--------------------------------------------\n");
	printf("��Jm����ƭ�:");
	scanf("%d",&m);
	printf("\n��Jn����ƭ�:");
	scanf("%d",&n);
	printf("A(%d,%d)=%d",m,n,Ackermann(m,n));
	
	printf("\n\n\n");
	printf("---------------------4----------------------\n");
	printf("---�g�@�Ө禡�A��X���n�H�����Ҧ�����Ƥ��A------\n");
	printf("---�O5��7�����ƪ��Ҧ��ƭȡC-----------------\n");
	printf("--------------------------------------------\n");
	printf("��Jn����ƭ�:");
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
