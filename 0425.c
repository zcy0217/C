#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//double sort
	//ch5 P.82
	
	int i,j,k,temp=0;
	printf("請輸入三個值:\n");
	scanf("%d %d %d",&i,&j,&k);
	if(i<j)
	{
		temp=i;
		i=j;
		j=temp;
	}
	if(j<k)
	{
		temp=j;
		j=k;
		k=temp;
	}
	if(i<j)
	{
	temp=i;
	i=j;
	j=temp;
	}
	printf("%d %d %d",i,j,k);
	return 0;
	}

