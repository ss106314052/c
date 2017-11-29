#include<stdio.h>
#include<stdlib.h>

void CH8_1();
void CH8_2();
void CH8_3();
void CH8_4();
void CH8_5();
void CH8_7();
void CH8_8();
void CH8_9();
void CH8_10();
void CH8_11();


int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.雙重指標變數\n");
		printf("2.三重指標變數\n");
		printf("3.指標變數除錯練習<一>\n");
		printf("4.指標變數除錯練習<二>\n");
		printf("5.更改範例一\n");
		printf("6.指標陣列與二維陣列<一>\n");
		printf("7.指標陣列與二維陣列<二>\n");
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
			CH8_1();
			break;
		case 2:
			CH8_2();
			break;
		case 3:
			CH8_3();
			break;
		case 4:
			CH8_4();
			break;
		case 5:
			CH8_5();
			break;
		case 6:
			CH8_6();
			break;
		case 7:
			CH8_7();
			break;
		case 8:
			CH8_8();
			break;
		case 9:
		//	CH8_9();
			break;
		case 10:
		//	CH8_10();
			break;
		case 11:
		//	CH8_11();
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