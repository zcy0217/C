#include <stdio.h>
#include <stdlib.h>
#define password 1234
int main(void)
{
	int a,i;
	int b,reversenum=0;	
	int j,leftspace,leftword,middlespace,rightword;
	
	printf("-------------�Ǹ�:B10905001-------------\n");
	printf("-------------�m�W:�i�Ҫ�-------------\n");
	
	printf("-------------�Ĥ@��--------------------\n");
	printf("-------------�K�X���ҵ{��--------------\n");
	printf("-----�K�X:1234�A��J���ƥH�T������-----\n");
	printf("\n");
	for (i=1;i<=3;i++)
	{
		printf("�п�J�|��ƱK�X:");
		scanf("%d",&a);
		if (password==a)
		{
			printf("�K�X���T!!\n");
			printf("\n");
			break;
		}
		else
		{
			printf("�K�X���~!!\n");
		}
		if (i==3)
		{
			printf("�K�X���~�T���A�����n�J!!\n");
			printf("\n");
	
		}
	}
	
	printf("---------------�ĤG��--------------\n");
	printf("-----------�N�ƭȤϦV��X----------\n");
	printf("\n�п�J�@�ӥ����:");
	scanf("%d",&b);
	while(b!=0)
	{
		reversenum=reversenum*10+b%10;
		b/=10; 
	}
	printf("�ϦV��X���G��:%d\n",reversenum);
	
	printf("---------------�ĤT��--------------\n");
	printf("-------------��X�p�U�ϧ�----------\n");
	printf("\n");
	//abcd
	for (j=0;j<4;j++) //����h�� 
	{	
		for (leftspace=0;leftspace<j;leftspace++) //�����ť�
		{
			printf(" ");
			} 
		for (leftword=1;leftword>0;leftword--) //�����r��
		{
			printf("%c",j+97);
			}
		for (middlespace=8;middlespace/2>j;middlespace--) //������ť�
		{
			printf(" ");
			}
		for (rightword=1;rightword>0;rightword--) //����k��r�� 
		{
			printf("%c",j+97);
			} 
		printf("\n");
	}	
	//e
	printf("    e\n");
	//fghi
	for (j=5;j<9;j++) //����h�� 
	{	
		for (leftspace=3;leftspace>j-5;leftspace--) //�����ť�
		{
			printf(" ");
			} 
		for (leftword=1;leftword>0;leftword--) //�����r��
		{
			printf("%c",j+97);
			}
		for (middlespace=1;middlespace/2<j-4;middlespace++) //������ť�
		{
			printf(" ");
			}
		for (rightword=1;rightword>0;rightword--) //����k��r�� 
		{
			printf("%c",j+97);
			}
		printf("\n");
	}
	return 0;
	}

