#include<stdio.h>
#include<stdlib.h>
int i=1, num, input;
void function5();
void hw4_5(void)
{
	printf("�ثe��������Q�s�����H��100\n");
	printf("�п�J�ּW����\n");
	scanf("%d", &input);
	for(i=1;i<=input;i++)
	function5();
}
void function5(void)
{
	static int num = 100;
	printf("�ثe��������Q�s�����H��%d\n", ++num);
}