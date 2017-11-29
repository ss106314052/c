#include<stdio.h>
#include<stdlib.h>

int function4(), n = 1; //»¼¦^¨ç¼Æ
void hw4_4(void)
{
	printf("%d", function(n));
	return 0;
	system("pause");
}
int function4(n)
{
	do
		n = function(n) + n;
	while (n >= 1);

}