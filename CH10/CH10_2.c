/* ex_1b.c */
#include <stdio.h>
#include <stdlib.h>
void CH10_2()
{
	/* �B�z scanf()��J�r�������I */
	char ch;
	int i;
	for (i = 1; i <= 3; i++) /* �ϥΰj��n�D��J3���r�� */
	{
		printf("#%d ����J��Ƭ�: ", i);
		scanf("%c", &ch); /* �Hscanf( )��J�r�� */
		printf("#%d ����X��Ƭ�: %c\n\n", i, ch);
		while (getchar() != '\n')
			continue;
	}
	system("PAUSE");
	return 0;
}