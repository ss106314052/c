#include<stdio.h>
#include<stdlib.h>
void toupper2()
{

	char ch;
	int i = 1;
	while (i)
	{
		printf("請輸入一個小寫英文字母: ");
		ch = _getche();
		if (islower(ch))
		{
			ch -= 32;
			printf("\n轉大寫後為%c\n", ch);
			i = 0;
		}
		else if (isupper(ch))
		{
			printf("\n%c已經是大寫\n", ch);
			i = 0;
		}
		else
		{
			printf("\n輸入錯誤,請重新輸入\n");
			i = 1;
		}

	}
}