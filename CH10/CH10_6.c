/* ex_2b.c */
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
void CH10_6()
{
	char ch;
	printf("�п�J�@�Ӧr��: ");
	ch = _getche();
	if (isalpha(ch))
	printf("\n%c ���^��r��\n", ch);
	else if (isdigit(ch))
	printf("\n%c ���Ʀr\n", ch);
	else
	printf("\n%c ���O�@�^��r���μƦr\n", ch);
	system("PAUSE");
	return 0;
}