#include <stdio.h>
#include <stdlib.h>
void CH2_3(void)
{
	int a = 3, b = 3;
	printf("a=%d", a);
	printf(", a++���Ǧ^�Ȭ�%d", a++); /* �p��a++,�æL�X��Ǧ^�� */
	printf(", a=%d\n", a);
	printf("b=%d", b);
	printf(", ++b���Ǧ^�Ȭ�%d", ++b); /* �p��++b,�æL�X��Ǧ^�� */
	printf(", b=%d\n", b);

	system("pause");
	return 0;
}