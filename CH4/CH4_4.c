#include <stdio.h>
#include <stdlib.h>
#define MAX 5 /* �w�qMAX��5 */
void CH4_4(void)
{
	int score[MAX]; /* �ŧiscore�}�C,�i�s��MAX�Ӿ�� */
	int i = 0, num;
	float sum = 0.0f;
	printf("Please input the score, input 0 to end:\n");
	do
	{
		if (i == MAX) /* ��i���Ȭ�MAX��,��ܰ}�C�w��,�Y�����J */
		{
			printf("Array space has been used up!!\n");
			i++; /* ������Ni�ȥ[1,�]��23��|��i���ȴ�1�� */
			break;
		}
		printf("Please input the score:");
		scanf("%d", &score[i]);
	} while (score[i++]>0); /* ��J���Z,��J0�ɵ��� */
	num = i - 1;
	for (i = 0; i<num; i++)
		sum += score[i]; /* �p�⥭�����Z */
	printf("average score %.2f\n", sum / num);

	system("pause");
	return 0;
}