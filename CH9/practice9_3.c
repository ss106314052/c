#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void practice9_3()
{
	struct order
	{
		char product[20]; /*產品名稱*/
		double price; /*產品單價*/
		int quantity; /*產品數量 */
	};
	struct order num[5];
	double total=0, sum=0;
	int i;
	for (i = 0; i <= 4; i++)
	{
		printf("請輸入產品名稱: ");
		scanf("%s", num[i].product);
		printf("請輸入產品價格: ");
		scanf("%lf", &num[i].price);
		printf("請輸入訂購數量: ");
		scanf("%d", &num[i].quantity);
	}
	for (i = 0; i <= 5; i++)
	{
		total = num[i].price*num[i].quantity;
		sum += total;
		printf("產品名稱:%s\n ", num[i].product);
		printf("產品價格:%lf\n ", num[i].price);
		printf("訂購數量:%d\n ", num[i].quantity);


	}
	printf("全部總價=%lf", total);
}
	
