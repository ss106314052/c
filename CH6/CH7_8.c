#include <stdio.h>
#include <stdlib.h>
void swap2(int *, int *); /* ���swap()�쫬���ŧi */
int a = 5, b = 20;
void CH7_8(void) {
	
	printf("Before swap...\n");
	printf("a=%d,b=%d\n", a, b);
	printf("�洫�e��}a=%p\n", &a);
	printf("�洫�e��}b=%p\n", &b);
	swap2(&a, &b);
	printf("After swap...\n");
	printf("a=%d,b=%d\n", a, b);
	printf("�洫���}a=%p\n", &a);
	printf("�洫���}b=%p\n", &b);
	system("pause");
	return 0;
}
void swap2(int *p1, int *p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	
}