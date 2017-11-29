/*
°£¿ù
#include <stdio.h>
int main( )
{
int a=100;
int *p = a;
int **pp = p;
printf("a=%d, *p=%d, and **pp=%d\n", a, *p, **pp);
return 0;
}
*/
#include <stdio.h>
void CH8_3(void)
{
	int a = 100;
	int *p = &a;
	int **pp =&p;
	printf("a=%d, *p=%d, and **pp=%d\n", a, *p, **pp);
	return 0;
}