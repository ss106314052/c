#include <stdio.h>
#include <stdlib.h>
void CH7_5(void) {
	int a1 = 100, *ptri;
	float a2 = 3.2f, *ptrf;
	ptri = &a2; /* ���~,�Nint���A�����Ы��Vfloat���A���ܼ� */
	ptrf = &a1; /* ���~,�Nfloat���A�����Ы��Vint���A���ܼ� */
	printf("sizeof(a1)=%d\n", sizeof(a1));
	printf("sizeof(a2)=%d\n", sizeof(a2));
	printf("a1=%d,*ptri=%d\n", a1, *ptri);
	printf("a2=%.1f,*ptrf=%.1f\n", a2, *ptrf);
	system("pause");
	return 0;
}