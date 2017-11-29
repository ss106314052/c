#include<stdio.h>
#include<stdlib.h>
int m = 0, n = 0, x, y;
int gcd(int, int);
void hw4_1(void)
{
	
	printf("GCD:%d\n", gcd(m, n));
	return 0;
	system("pause");
}
int gcd(int m,int n)
{
	printf("請輸入兩數");
	
	do
	{
		if (n == 0)
			return m;
		else
			return gcd(n, m%n);
	} while (m > n);
	do
	{ 
		if(m == 0)
			return n;
		else
			return gcd(m, n%m);
	} while (n > m);

}
