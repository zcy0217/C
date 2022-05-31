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
	
	printf("�Ǹ�:B10905001\n�m�W:�i�Ҫ�\n");
	printf("-----------Hanoi Tower Function Extension--------\n-------------------------------------------------\n");
	printf("�п�J�M���Ӽ�:");
	scanf("%d",&i);
	count=pow(2,i)-1;
	startclock=clock();
	hanoi(i,'A','B','C');
	endclock=clock();
	printf("\n�`�@�h���F%d���I\n",count);
	printf("��F%g��\n",(endclock-startclock)/CLK_TCK);
	
	printf("------��J���ƩM�����ӼƭȡA�íp����ƭ�--------\n");
	printf("------�ШϥΨ禡���覡�غc���ƭp��A�p�Gmy_pow()--\n");
	printf("�п�J��ӼƦr�G\n");
	printf("x=");
	scanf("%d",&x);
	printf("r=");
	scanf("%d",&r);	
	printf("%d��%d����=%d\n",x,r,my_pow(x,r));
	
	printf("-----�H�����w�q���x,y���[����A����L��Jx,y��--\n");
	printf("-----�D x+y, x-y, x*y, x/y ����--------------------\n");
	printf("�п�Jx=");
	scanf("%d",&a);
	printf("�п�Jy=");
	scanf("%d",&b);
	printf("x+y=%d\nx-y=%d\nx*y=%d\nx/y=%f",plus(a,b),minus(a,b),multiplied(a,b),divided(a,b));
	return 0;
	}

void hanoi(int i,char begin,char mid,char dest)
{
	int count=0;
	if (i==1)
		printf("�M��%d�q[%c]����[%c]\n",i,begin,dest);
	else
	{
		hanoi(i-1,begin,dest,mid);
		printf("�M��%d�q[%c]����[%c]\n",i,begin,dest);
			hanoi(i-1,mid,begin,dest);
	}
}
int my_pow(int X,int R)
{
	return pow(X,R);
 } 
