#include<stdio.h>
#include<stdlib.h>
void Max();
void Min();
int a, b, c;
void hw4_3(void)
{   
	printf("�п�J�T�Ӽ�");
	scanf("%d%d%d", &a, &b, &c);
	Max();
	Min();
	
	system("pause");
}
void Max()
{
	if ((a > b)&&(a > c))
		printf("�̤j�Ȭ�%d", a);
	else if ((b > a)&&(b > c))
		printf("�̤j�Ȭ�%d", b);
	else if ((c > a)&&(c > b))
		printf("�̤j�Ȭ�%d", c);
}
void Min()
{
	if ((a < b)&&(a < c))
		printf("�̤p�Ȭ�%d", a);
	else if ((b < a)&&(b < c))
		printf("�̤p�Ȭ�%d", b);
	else if ((c < a)&&(c < b))
		printf("�̤p�Ȭ�%d", c);
}
