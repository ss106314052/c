#include <stdio.h>
#include <stdlib.h>

void practice5_2(void)
{

	int info[10][2], i;

	for (i = 0; i <= 9; i++) {
		printf("�п�J�� %2d �ӤH������: ", i + 1);
		scanf("%d", &info[i][1]);
		info[i][0] = i + 1;
	}

	printf("\n------------------------\n");
	for (i = 0; i < 9; i++)
		printf("��%2d �ӤH��������: %d\n", info[i][0], info[i][1]);


}