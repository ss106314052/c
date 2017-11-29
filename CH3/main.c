#include<stdio.h>
#include<stdlib.h>

void CH3_1();
void CH3_2();
void CH3_3();
void CH3_4();
void CH3_5();
void CH3_6();
void CH3_7();
void CH3_8();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.遞增與遞減運算子\n");
		printf("2.條件運算子的範例\n");
		printf("3.巢狀 if 敘述的練習\n");
		printf("4.switch 敘述的範例\n");
		printf("5.while迴圈的範例\n");
		printf("6.以巢狀while迴圈改寫九九乘法表\n");
		printf("7.以巢狀迴圈印出幾何圖形\n");
		printf("8.以巢狀迴圈反印數字\n");


		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~8, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH3_1();
			break;
		case 2:
			CH3_2();
			break;
		case 3:
			CH3_3();
			break;
		case 4:
			CH3_4();
			break;
		case 5:
			CH3_5();
			break;
		case 6:
			CH3_6();
			break;
		case 7:
			CH3_7();
			break;
		case 8:
			CH3_8();
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