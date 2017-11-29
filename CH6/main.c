#include<stdio.h>
#include<stdlib.h>

void CH7_1();
void CH7_2();
void CH7_3();
void CH7_4();
void CH7_5();
void CH7_7();
void CH7_8();
void CH7_9();
void CH7_10();
void CH7_11();


int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.DEFINE練習\n");
		printf("2.指標變數的使用範例\n");
		printf("3.指標變數所佔的位元組\n");
		printf("4.指標操作的練習\n");
		printf("5.當指標指向錯誤的型態時\n");
		printf("6.傳遞指標到函數\n");
		printf("7.變數值的互換(一)\n");
		printf("8.變數值的互換(二)\n");
		printf("9.傳回多個數值的函數\n");
		printf("10.陣列名稱的值即陣列的位址\n");
		printf("11.指標的算數運算\n");
		

		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~?, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH7_1();
			break;
		case 2:
			CH7_2();
			break;
		case 3:
			CH7_3();
			break;
		case 4:
			CH7_4();
			break;
		case 5:
			CH7_5();
			break;
		case 6:
			CH7_6();
			break;
		case 7:
			CH7_7();
			break;
		case 8:
			CH7_8();
			break;
		case 9:
			CH7_9();
			break;
		case 10:
			CH7_10();
			break;
		case 11:
			CH7_11();
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