#include <stdio.h>
#include <stdlib.h>
float area(float,float);
float length(float,float);
int main(void)
{
	float a,b;
	printf("�п�J���e:");
	scanf("%f %f",&a,&b);
	printf("����έ��n:%f,����ΩP��:%f",area(a,b),length(a,b));
	return 0;
	}
float area(float x,float y)
{
	return x*y;
}
float length(float x,float y)
{
	return 2*(x+y);
}
