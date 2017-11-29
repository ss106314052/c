#include<stdio.h>
#include<stdlib.h>

int Max(), Min(), a=76, b=24, c=58;            //Max程,Min程
void hw4_3(void)
{
	Max();
	Min();
	return 0;
	system("pause");
}
int Max()
{
	if (a > b&&a > c)
		printf("程%d", a);
	else if (b > a&&b > c)
		printf("程%d", b);
	else if (c > a&&c > b)
		printf("程%d", c);
}
int Min()
{
	if (a < b&&a < c)
		printf("程%d", a);
	else if (b < a&&b < c)
		printf("程%d", b);
	else if (c < a&&c < b)
		printf("程%d", c);
}
