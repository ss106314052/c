
int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		for (int i = 1; i <= 8; i++)
		printf("%d.CH10_%d\n", i, i);
		printf("9.小轉大寫\n");
		printf("10.大轉小寫\n");

		printf("----------------------------------------------------\n\n");
		printf("請輸入要執行的作業?  1 ~10, 按'0' 則結束執行!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH10_1();
			break;
		case 2:
			CH10_2();
			break;
		case 3:
			CH10_3();
			break;
		case 4:
			CH10_4();
			break;
		case 5:
			CH10_5();
			break;
		case 6:
			CH10_6();
			break;
		case 7:
			CH10_7();
			break;
		case 8:
			CH10_8();
			break;
		case 9:
			tolower2();
			break;
		case 10:
			toupper2();
			break;
		case 0:
			flag = 0;
			break;
		default:
			break;
		}

		system("pause");
		system("cls");

	}


}