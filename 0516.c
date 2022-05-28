#include <stdio.h>
#include <stdlib.h>
float area(float,float);
float length(float,float);
int main(void)
{
	float a,b;
	printf("請輸入長寬:");
	scanf("%f %f",&a,&b);
	printf("長方形面積:%f,長方形周長:%f",area(a,b),length(a,b));
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
