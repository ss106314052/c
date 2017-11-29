#include<stdio.h>
#include<stdlib.h>

void CH2_1();
void CH2_2();
void CH2_3();
void CH2_4();
void CH2_5();
void CH2_6();
void CH2_7();
void CH2_8();
void CH2_9();
void CH2_10();
void CH2_11();
void CH2_12();



int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.跳脫序列與格式碼的應用\n");
		printf("2.餘數運算子\n");
		printf("3.遞增與遞減運算子\n");
		printf("4.邏輯運算子\n");
		printf("5.巢狀 if 敘述的練習\n");
		printf("6.if-else-if 敘述的應用\n");
		printf("7.if 與 else 的配對問題\n");
		printf("8.條件運算子的範例\n");
		printf("9.switch 敘述的範例\n");
		printf("10.while迴圈的範例\n");
		printf("11.while迴圈的範例\n");
		printf("12.以巢狀while迴圈改寫九九乘法表\n");

		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~12, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH2_1();
			break;
		case 2:
			CH2_2();
			break;
		case 3:
			CH2_3();
			break;
		case 4:
			CH2_4();
			break;
		case 5:
			CH2_5();
			break;
		case 6:
			CH2_6();
			break;
		case 7:
			CH2_7();
			break;
		case 8:
			CH2_8();
			break;
		case 9:
			CH2_9();
			break;
		case 10:
			CH2_10();
			break;
		case 11:
			CH2_11();
			break;
		case 12:
			CH2_12();
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