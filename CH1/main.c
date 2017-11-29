#include<stdio.h>
#include<stdlib.h>

void CH1_1();
void CH1_2();
void CH1_3();
void CH1_4();
void CH1_5();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.第一個C程式語言\n");
		printf("2.程式區塊及本體\n");
		printf("3.溢位 (overflow) (1/2)\n");
		printf("4.變數的設值方式\n");
		printf("5.輸入函數scanf()\n");
		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~5, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH1_1();
			break;
		case 2:
			CH1_2();
			break;
		case 3:
			CH1_3();
			break;
		case 4:
			CH1_4();
			break;
		case 5:
			CH1_5();
			break;
		case 0:
			flag = 0;
			break;
		default:
			break;
		}

		system("pause");
		system("cls");

	}


}