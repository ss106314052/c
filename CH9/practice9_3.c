#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void practice9_3()
{
	struct order
	{
		char product[20]; /*���~�W��*/
		double price; /*���~���*/
		int quantity; /*���~�ƶq */
	};
	struct order num[5];
	double total=0, sum=0;
	int i;
	for (i = 0; i <= 4; i++)
	{
		printf("�п�J���~�W��: ");
		scanf("%s", num[i].product);
		printf("�п�J���~����: ");
		scanf("%lf", &num[i].price);
		printf("�п�J�q�ʼƶq: ");
		scanf("%d", &num[i].quantity);
	}
	for (i = 0; i <= 5; i++)
	{
		total = num[i].price*num[i].quantity;
		sum += total;
		printf("���~�W��:%s\n ", num[i].product);
		printf("���~����:%lf\n ", num[i].price);
		printf("�q�ʼƶq:%d\n ", num[i].quantity);


	}
	printf("�����`��=%lf", total);
}
	
