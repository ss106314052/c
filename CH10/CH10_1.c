/* ex_1a.c */
#include <stdio.h>
#include <stdlib.h>
void CH10_1()
{
	/* ����scanf��Ʀb��J�r�������I */
	char ch;
	int i;
	for (i = 1; i <= 3; i++)
	{
		printf("#%d ����J��Ƭ�: ", i);
		scanf("%c", &ch);
		printf("#%d ����X��Ƭ�: %c\n\n", i, ch);
	}
	system("PAUSE");
	return 0;
}