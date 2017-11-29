#include<stdio.h>
#include<stdlib.h>

void CH4_1();
void CH4_2();
void CH4_3();
void CH4_4();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.do while迴圈\n");
		printf("2.陣列的範例\n");
		printf("3.陣列的應用-最大與最小值\n");
		printf("4.陣列界線的檢查\n");


		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~4, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH4_1();
			break;
		case 2:
			CH4_2();
			break;
		case 3:
			CH4_3();
			break;
		case 4:
			CH4_4();
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