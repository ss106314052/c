#include <stdio.h>
#include <stdlib.h>
void CH3_1(void)
{
	int a = 3, b = 3;
	printf("a=%d", a);
	printf(", a++ return value%d", a++); /* �p��a++,�æL�X��Ǧ^�� */
	printf(", a=%d\n", a);
	printf("b=%d", b);
	printf(", ++b return value%d", ++b); /* �p��++b,�æL�X��Ǧ^�� */
	printf(", b=%d\n", b);

	system("pause");
	return 0;
}