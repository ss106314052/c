#include <stdio.h>
#include <stdlib.h>
void CH7_2(void)
{
	int *ptr, num = 20;
	ptr = &num; /* �Nnum����}�]������ptr�s�� */
	printf("num=%d, &num=%p\n", num, &num);
	printf("*ptr=%d, ptr=%p, &ptr=%p\n", *ptr, ptr, &ptr);
	system("pause");
	return 0;
}