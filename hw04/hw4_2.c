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
	printf("�п�J�@��1-100�����\n");
	scanf("%d", &b);
}
int compare()
{
	do
	{
		if (a > b)
			printf("�A���@�I\n");
		else if (a < b)
			printf("�A�C�@�I\n");
		getans();
	} while (a != b);

	if (a == b)
	{
		printf("���ߵ���\n");
		return 0;
	}

}