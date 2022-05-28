#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,k,bigger,smaller,min,mid,max;
	int score;
	int gender;
	float height,weight;
	int hour,money=60;
	int a,b;
	
	printf("-----第一題-----\n");
	printf("請輸入三個整數:\n");
	scanf("%d %d %d",&i,&j,&k);
	if (i>j)
	{
		bigger=i;
		smaller=j;
	}
	else
	{
		bigger=j;
		smaller=i;
	}
	if (bigger>k)
	{	max=bigger;
		if (k>smaller)
		{
			mid=k;
			min=smaller;
		}
		else
		{	
			mid=smaller;
			min=k;
		}
	}
	else
	{
		min=smaller;
	}
	printf("最小值為%d\n",min);
	
	printf("-----第二題-----\n");
	printf("請輸入一個整數成績:\n");
	scanf("%d",&score);
	if (score>=80)
	{
		printf("成績A等\n");
	}
	else if (score>=60)
	{
		printf("成績B等\n");
	}
	else
	{
		printf("成績C等\n");
	}
	
	printf("-----第三題-----\n");
	printf("請輸入一個整數成績:\n");
	scanf("%d",&score);
	switch (score)
	{
		case 80 ...100:
			printf("成績A等\n");
			break;
		case 60 ...79:
			printf("成績B等\n");
			break;
		default:
			printf("成績C等\n");
	}
	
	printf("-----第四題-----\n");
	printf("請輸入性別(男:0/女:1)\n");
	scanf("%d",&gender);
	printf("請輸入身高(單位公分)\n");
	scanf("%f",&height);
	printf("標準體重=%f\n",weight=
	(gender=0)?(height-80)*0.7:(height-70)*0.6); 
	
	printf("-----第五題-----\n");
	printf("請輸入工作總時數\n");
	scanf("%d",&hour);
	printf("總薪資是%d元\n",money=
	(hour>40)?(money*hour*1.33):(hour*money));
	
	return 0;
	} 

