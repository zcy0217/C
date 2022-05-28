#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int password=1234,newpassword,comfirmpassword;
	int guess,count=1,choose,balance=10000,save,pick;
	char option;
	
	Top:
	while(count<4)
	{
		printf("請輸入密碼:");
		scanf("%d",&guess);		
		if(guess==password)
		{
			break;
		}
		else
		{	
			printf("密碼輸入錯誤%d次!!",count);
			getche();
			if (count<=2)
			{
				system("cls");
			}
			count+=1;
		}
		
	if (count==4)
	{
		printf("\n密碼驗證超過3次，ByeBye!!\n\nbyebye!!");
			}		
	}
	if (count<4)
	{
		system("cls");
		printf("1. 查詢餘額\n2. 存款金額\n3. 提款金額\n4. 密碼變更\n請輸入欲辦理項目(1~4)：");
		scanf("%d",&choose);
		system("cls");
		switch(choose)
		{
			case 1:
				printf("帳戶餘額:%d元\n",balance);
				printf("是否繼續操作(y/n)?");
				option=getche();
				if (option=='y')
				{
					system("cls");
					goto Top;
				}
				if (option=='n')
				{
					printf("\nbyebye!!");
				}
				break;
			case 2:
				printf("請輸入存款金額:");
				scanf("%d",&save);
				balance+=save; 
				printf("帳戶餘額:%d元\n",balance);
				printf("是否繼續操作(y/n)?");
				option=getche();
				if (option=='y')
				{
					system("cls");
					goto Top;
				}
				if (option=='n')
				{
					printf("\nbyebye!!");
				}
				break;
			case 3:
				printf("請輸入取款金額:");
				scanf("%d",&pick);
				balance-=pick; 
				printf("帳戶餘額:%d元\n",balance);
				printf("是否繼續操作(y/n)?");
				option=getche();
				if (option=='y')
				{
					system("cls");
					goto Top;
				}
				if (option=='n')
				{
					printf("\nbyebye!!");
				}
				break;			
			case 4:
				printf("請輸入新的四位數密碼:");
				scanf("%d",&newpassword);
				printf("請確認新的四位數密碼:");
				scanf("%d",&comfirmpassword);
				if (newpassword=comfirmpassword)
				{
					printf("密碼更改完成!!");
					password=newpassword;
					getche();
					system("cls");
					goto Top;
				}
				else
				{
					printf("確認密碼錯誤!!請重新操作!!");
					getche();
					system("cls");
					goto Top;
				}
				break;
		}
	}
	return 0;
	}
