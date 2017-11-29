#include<stdio.h>
#include<stdlib.h>
void tolower2(ch)
{
	char ch;
	int i = 1;
	while (i)
	{
		printf("請輸入一個大寫英文字母: ");
		ch = _getche();
		if (isupper(ch))
		{
			ch += 32;
			printf("\n轉小寫後為%c\n", ch);
			return 'ch';
			i = 0;
			
		}
		else if (islower(ch))
		{
			printf("\n%c已經是小寫\n", ch);
			return'ch';
			i = 0;
		}
		else 
		{
			printf("\n輸入錯誤\n");
			return 'ch';
			i = 0;
		}
		
	}
}	