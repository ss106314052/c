#include <stdio.h>
#include <stdlib.h>
void CH5_2(void)
{
	/* ���G���}�C���-�ҤT��(�C����)�A�@�ѦҤT��(�����) */
	int score[3][3] = { { 74, 72, 63 },{ 83, 92, 74 },{ 84, 82, 65 } };  // { 74, 72, 63, 83, 92, 74, 84, 82, 65 };
	int index1, index2, total = 0;
	for (index1 = 0; index1 < 3; index1++)          /* �~�鱱��Ҹդ�� */
	{
		printf("\n�� %d �Ѫ����Ƥ��O��: ", index1 + 1);
		for (index2 = 0; index2 < 3; index2++)      /* ���鱱��Ҹլ�� */
		{
			printf("%3d", score[index1][index2]);  /* �L�X�U�즨�Z */
			total += score[index1][index2];        /* �N���Z�[�` */
		}
	}
	printf("\n\n�`��: %d\n", total);
	printf("��������: %.2f\n", total / 9.0);

	//system("PAUSE");
	//return 0; 
}