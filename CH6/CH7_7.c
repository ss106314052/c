#include <stdio.h>
#include <stdlib.h>
void swap(int, int); /* swap()��ƪ��쫬 */
void CH7_7(void) {
	int a = 5, b = 20;
	printf("Before swap...\n");
	printf("a=%d,b=%d\n", a, b);
	swap(a, b);
	printf("After swap...\n");
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}
void swap(int x, int y) /* �w�qswap()��� */
{
	int tmp = x;
	x = y;
	y = tmp;
}