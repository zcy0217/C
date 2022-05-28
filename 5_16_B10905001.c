#include <stdio.h>
#include <stdlib.h>

int reversenum(int);
float mTOft(float); //������^�`
float ftTOm(float); //�^�`�ऽ��
float kgTOpound(float); //������^��
float poundTOkg(float); //�^���ऽ��
 
int main(void)
{
	int t,i,num1,num2;
	int option,option2,option3;
	float number;
	
	printf("�п�J�n�B�⪺���ơG");
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		printf("�п�J��ӭn�ۥ[����ƭȡG");
		scanf("%d %d",&num1,&num2);
		printf("�Ĥ@�ӼƭȤ��ର�G%d\n",reversenum(num1));
		printf("�ĤG�ӼƭȤ��ର�G%d\n",reversenum(num2));
		printf("����ƭȬۥ[���G%d\n",reversenum(num1)+reversenum(num2));
		printf("�u���ƭȬۥ[���G���G%d\n",num1+num2);
		printf("----------------------------------\n");
	}
	
	printf("1.���q\n2.����\n");
	scanf("%d",&option);
	switch (option)
	{
		case 1:
			{
				printf("���(1)������^�S(2)�^�S�ऽ��\n");
				scanf("%d",&option2);
				printf("�п�J�Ʀr\n");
				scanf("%f",&number);
				switch (option2) 
				{	
					case 1:
						{
							printf("����%f�^��",kgTOpound(number));
							break;
						}
					case 2: 
						{
							printf("����%f����",poundTOkg(number));
							break;	
						}
				}
				break;
			}
		case 2:
			{
				printf("���(1)������^�`(2)�^�`�ऽ��\n");
				scanf("%d",&option3);
				printf("�п�J�Ʀr\n");
				scanf("%f",&number);
				switch (option3)
				{
					case 1:
						{
							printf("����%f�^�`",mTOft(number));
							break;
						}
					case 2:
					{
						printf("����%f����",ftTOm(number));
						break;
					}	
				}
				break;
			}
	}	
	return 0;
}

int reversenum(int x)
{	
	int num=0;
	while(x!=0)
	{
		num=num*10+x%10;
		x/=10;
	}
	return num;
}
float mTOft(float x) //������^�`
{
	return x*0.3048;
}
float ftTOm(float x) //�^�`�ऽ��
{
	return x/0.3048;
}
float kgTOpound(float x) //������^��
{
	return x/0.454;
}
float poundTOkg(float x) //�^���ऽ��
{
	return x*0.454;
}


