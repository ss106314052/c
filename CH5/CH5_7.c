#include <stdio.h>
#include <stdlib.h>
void CH5_7()
{
	int i, j, k, temp, flag, size;
	int arr[] = { 80, 90, 40, 70, 50, 60 };
	size = sizeof(arr) / sizeof(int);
	printf(".....Before sorted........\n");
	for (i = 0; i <= size - 1; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");

	/**********Bubble sort****************/
	/* �`�@��size�Ӹ�ơA�ҥH�|��size-1����pass */
	for (i = 0; i<size - 1; i++) {
		flag = 0; /* �ΨӧP�_�O�_�n�A�~��Ƨ� */
				  /* �L�X�ĴX���� pass ����� */
		printf("#%2d pass ����ƭp��: ", i + 1);
		for (k = 0; k<size - i; k++)
			printf("%d ", arr[k]);
		printf("\n");

		/* �n�������ơA�Ĥ@��pass�|��1�A�ĤG��pass�|��2�A�ĤT��pass�|��3�A�̦�����*/
		/* �ҥH�j�骺����B�⦡�� j<size-1-i */
		for (j = 0; j<size - 1 - i; j++)
		{
			/* ������Ƥj��U�@����ƮɡA�h�[�H��� */
			if (arr[j] > arr[j + 1]) {
				flag = 1;  /* �Y����աA�h�Nflag�]��1 */
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			/* �L�X�C�@��compare�᪺��� */
			printf("   #%d compare: ", j + 1);
			for (k = 0; k<size - i; k++)
				printf("%d ", arr[k]);
			printf("\n");
		}

		/* �L�X�C�@��pass�᪺��� */
		printf("#%d pass �����ɸ�ƶ��Ǧp�U: \n", i + 1);
		for (k = 0; k<size; k++)
			printf("%d ", arr[k]);
		printf("\n\n");
		if (flag == 0) /* ��flag��0�S�A��ܤW�@�^�X�S����աA����ܤw�ƧǦn�� */
			break;
	}
	/************************************/
	for (i = 1; i <= 25; i++)
		printf("-");
	printf("\n");
	printf(".....After sorted.......\n");
	for (i = 0; i<size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	//system("PAUSE");
	//return 0;
}
