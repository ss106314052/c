#include <stdio.h>
#include <stdlib.h>
void practice5_1(void)
{
	/* score�O2�C3�檺�}�C */
	int score[2][3] = { { 10, 20,30 },{ 40, 50, 60 } };
	int i, j;
	for (i = 0; i <= 1; i++)
		for (j = 0; j <= 2; j++)
			printf("score[%d][%d] = %d\n", i, j, score[i][j]);
	system("PAUSE");
	return 0;
}