/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	double d;
	double *p = &d;
	double **pp = p;
	printf("�п�J�@ double ��: ");
	scanf("%f", d);
	printf("a=%d, *p=%d, and **pp=%d\n", d, *p, **pp);
	system("PAUSE");
	return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
void CH8_4(void)
{
	double d;
	double *p = &d;
	double **pp = &p;
	printf("�п�J�@ double ��: ");
	scanf("%lf", &d);
	printf("a=%.2f, *p=%.2f, and **pp=%.2f\n", d, *p, **pp);
	system("PAUSE");
	return 0;
}