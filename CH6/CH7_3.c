#include <stdio.h>
#include <stdlib.h>
void CH7_3(void)
{
	int *ptri; /* �ŧi���V��ƪ�����ptri */
	char *ptrc; /* �ŧi���V�r��������ptrc */
	printf("sizeof(ptri)=%d\n", sizeof(ptri));
	printf("sizeof(ptrc)=%d\n", sizeof(ptrc));
	printf("sizeof(*ptri)=%d\n", sizeof(*ptri));
	printf("sizeof(*ptrc)=%d\n", sizeof(*ptrc));

	system("pause");
	return 0;
}