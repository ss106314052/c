#include<stdio.h>
#include<stdlib.h>
int i=1, num, input;
void function5();
void hw4_5(void)
{
	printf("目前為止網頁被瀏覽的人數100\n");
	printf("請輸入累增次數\n");
	scanf("%d", &input);
	for(i=1;i<=input;i++)
	function5();
}
void function5(void)
{
	static int num = 100;
	printf("目前為止網頁被瀏覽的人數%d\n", ++num);
}