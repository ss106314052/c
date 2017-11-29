#include<stdlib.h>
#include<stdio.h>

int a, b;
int init();
int getans();
int compare();
void hw4_2(void)
{
	init();
	getans();
	compare();
	system("pause");
	return 0;
}
int init()
{
	a = (rand() % 100) + 1;
}
int getans()
{
	printf("請輸入一個1-100的整數\n");
	scanf("%d", &b);
}
int compare()
{
	do
	{
		if (a > b)
			printf("再高一點\n");
		else if (a < b)
			printf("再低一點\n");
		getans();
	} while (a != b);

	if (a == b)
	{
		printf("恭喜答對\n");
		return 0;
	}

}