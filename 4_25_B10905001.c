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
	
	printf("-----�Ĥ@�D-----\n");
	printf("�п�J�T�Ӿ��:\n");
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
	printf("�̤p�Ȭ�%d\n",min);
	
	printf("-----�ĤG�D-----\n");
	printf("�п�J�@�Ӿ�Ʀ��Z:\n");
	scanf("%d",&score);
	if (score>=80)
	{
		printf("���ZA��\n");
	}
	else if (score>=60)
	{
		printf("���ZB��\n");
	}
	else
	{
		printf("���ZC��\n");
	}
	
	printf("-----�ĤT�D-----\n");
	printf("�п�J�@�Ӿ�Ʀ��Z:\n");
	scanf("%d",&score);
	switch (score)
	{
		case 80 ...100:
			printf("���ZA��\n");
			break;
		case 60 ...79:
			printf("���ZB��\n");
			break;
		default:
			printf("���ZC��\n");
	}
	
	printf("-----�ĥ|�D-----\n");
	printf("�п�J�ʧO(�k:0/�k:1)\n");
	scanf("%d",&gender);
	printf("�п�J����(��줽��)\n");
	scanf("%f",&height);
	printf("�з��魫=%f\n",weight=
	(gender=0)?(height-80)*0.7:(height-70)*0.6); 
	
	printf("-----�Ĥ��D-----\n");
	printf("�п�J�u�@�`�ɼ�\n");
	scanf("%d",&hour);
	printf("�`�~��O%d��\n",money=
	(hour>40)?(money*hour*1.33):(hour*money));
	
	return 0;
	} 

