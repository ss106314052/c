#include<stdio.h>
#include<stdlib.h>
int m = 0, n = 0;
void gcd(int, int);
void hw4_1(void)
{
	int m, n, r;
	int s;

	printf("¿é¤J¨â¼Æ¡G");
	scanf("%d %d", &m, &n);
	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}

	printf("GCD¡G%d\n", m);
	

	return 0;
}