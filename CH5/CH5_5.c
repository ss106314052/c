#include <stdio.h>
#include <stdlib.h>
void CH5_5(void) {
	int i, min, max, A[2][3][4] = 
	{ { { 1,2,3,4 },
		{ 5,6,7,8 },
		{ 9,10,11,12 } },

	{	{ 13,14,15,16 },
		{ 17,18,19,20 },
		{ 21,22,23,24 }	} };

	min = max = A[0]; /* 將max與min均設為陣列的第一個元素 */

	for (i = 0; i<5; i++)
	{
		if (A[i]>max) /* 判斷A[i]是否大於max */
			max = A[i];
		if (A[i]<min) /* 判斷A[i]是否小於min */
			min = A[i];
	}
	printf("The maximum value of the array element :%d\n", max);
	printf("The minimum value of the array element :%d\n", min);

	system("pause");
	return 0;
	}