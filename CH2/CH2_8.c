#include <stdio.h>
#include <stdlib.h>
void CH2_8(void)
{
	int num1, num2, larger;
	printf("Please input two integers: :");
	scanf("%d %d", &num1, &num2);

	num1>num2 ? (larger = num1) : (larger = num2); /* ����B��l */
	printf("%d greater value \n", larger);
	system("pause");
	return 0;
}