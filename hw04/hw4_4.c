#include<stdio.h>
#include<stdlib.h>
int n4 = 1, num4, i;
int function4(int);
void hw4_4(void)
{
	printf("�п�J�O��ƦC�Ӽ�");
	scanf("%d", &num4);
	for(i=1;i<=num4;i++)
	printf("%d,", function4(i));
	system("pause");
}
int function4(int n) {

	if (n == 0)
		return 0;

	if (n == 1)
		return 1;

	return (function4(n - 1) + function4(n - 2));

}