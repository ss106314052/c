#include<stdio.h>
#include<stdlib.h>

void CH9_1();
void CH9_2();
void CH9_3();
void CH9_4();
void CH9_5();
void CH9_6();
void CH9_7();
void CH9_8();
void CH9_9();
void CH9_10();
void CH9_11();
void CH9_12();
void practice9_1();
void practice9_2();
void practice9_3()


int main()
{

	int input;
	_Bool flag = 1;

	while (flag)
	{
		for (int i = 1; i <= 9; i++)
			printf("%d.CH9_%d\n",i,i);

		printf("10.practice9_3");
		

		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~?, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH9_1();
			break;
		case 2:
			CH9_2();
			break;
		case 3:
			CH9_3();
			break;
		case 4:
			CH9_4();
			break;
		case 5:
			CH9_5();
			break;
		case 6:
			CH9_6();
			break;
		case 7:
			CH9_7();
			break;
		case 8:
			CH9_8();
			break;
		case 9:
			CH9_9();
			break;
		case 10:
			CH9_10();
			break;
		case 11:
			CH9_11();
			break;
		case 12:
			CH9_12();
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