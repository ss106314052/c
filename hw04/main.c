#include<stdio.h>
#include<stdlib.h>


void hw4_1();
void hw4_2();
void hw4_3();
void hw4_4();
void hw4_5();


int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1. 利用遞迴和非遞迴函數求兩數的 gcd(最大公因數)\n");
		printf("2. 設計一猜數字遊戲, 先定義 init 函數 t 取得答案, 再定義 getans 函數, \n取得使用者輸入的答案, 最後再定義 compare 函數, 比較答案是否正確.\n");
		printf("3. 使定義二個函數, 一為印出三個整數的最大值, 二為印出三個整數的最小值)\n");
		printf("4. 費氏數列的規則為某一項的值為其前二項的和, 假設 F0=1, F1=1, 則費氏數列為:\n1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...試以遞迴函數和非遞迴函數執行之.\n");
		printf("5. 瀏覽一網頁時, 皆會提供到目前為止網頁被瀏覽的人數, 試以 static 儲存類別於函數中設計一計數器\n, 每當呼叫該函數, 計數器的值都要自動累加, 最後輸出該函數被呼叫的次數\n");
		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~5, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			hw4_1();
			break;
		case 2:
			hw4_2();
			break;
		case 3:
			hw4_3();
			break;
		case 4:
			hw4_4();
			break;
		case 5:
			hw4_5();
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