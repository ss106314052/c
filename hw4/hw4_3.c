#include<stdio.h>
#include<stdlib.h>

int Max(), Min(), a=76, b=24, c=58;            //Max���̤j��,Min���̤p��
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
		printf("�̤j�Ȭ�%d", a);
	else if (b > a&&b > c)
		printf("�̤j�Ȭ�%d", b);
	else if (c > a&&c > b)
		printf("�̤j�Ȭ�%d", c);
}
int Min()
{
	if (a < b&&a < c)
		printf("�̤p�Ȭ�%d", a);
	else if (b < a&&b < c)
		printf("�̤p�Ȭ�%d", b);
	else if (c < a&&c < b)
		printf("�̤p�Ȭ�%d", c);
}
