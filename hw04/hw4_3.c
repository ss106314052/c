#include<stdio.h>
#include<stdlib.h>
void Max();
void Min();
int a, b, c;
void hw4_3(void)
{   
	printf("叫块计");
	scanf("%d%d%d", &a, &b, &c);
	Max();
	Min();
	
	system("pause");
}
void Max()
{
	if ((a > b)&&(a > c))
		printf("程%d", a);
	else if ((b > a)&&(b > c))
		printf("程%d", b);
	else if ((c > a)&&(c > b))
		printf("程%d", c);
}
void Min()
{
	if ((a < b)&&(a < c))
		printf("程%d", a);
	else if ((b < a)&&(b < c))
		printf("程%d", b);
	else if ((c < a)&&(c < b))
		printf("程%d", c);
}
