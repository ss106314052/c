#include <stdio.h>
#include <stdlib.h>
void CH4_3(void) {
	int A[5] = { 7,48,30,17,62 };
	int i, min, max;
	min = max = A[0]; /* �Nmax�Pmin���]���}�C���Ĥ@�Ӥ��� */

	for (i = 0; i<5; i++)
	{
		if (A[i]>max) /* �P�_A[i]�O�_�j��max */
			max = A[i];
		if (A[i]<min) /* �P�_A[i]�O�_�p��min */
			min = A[i];
	}
	printf("The maximum value of the array element :%d\n", max);
	printf("The minimum value of the array element :%d\n", min);


}