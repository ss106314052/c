#include <stdio.h>
#include <stdlib.h>
void CH3_5(void)
{
	int i = 1, sum = 0; /* �]�w�j���� */
	while (i <= 10)
	{
		sum += i;
		printf(" From 1 to accumulate %2d=%2d\n", i, sum);
		i++;
	}
	system("pause");
	return 0;
}