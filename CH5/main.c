#include<stdio.h>
#include<stdlib.h>

void CH5_1();
void CH5_2();
void CH5_3();
void CH5_4();
void CH5_5();
void CH5_7();
void CH5_8();
void practice5_1();
void practice5_2();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.�G���}�C�������s��\n");
		printf("2.�@�ѦҤT��\n");
		printf("3.�}�C�d�Ҥ@\n");
		printf("4.�}�C�d�ҤG\n");
		printf("5.�T���}�C");
		printf("6.CH5_6\n");
		printf("7.CH5_7\n");
		printf("8.CH5_8\n");
		printf("9.practice5_1\n");
		printf("10.pracrice5_2\n");


		printf("----------------------------------------------------\n\n");
		printf("�п�J�n���檺�@�~?  1 ~10, ��'0' �h��������!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH5_1();
			break;
		case 2:
			CH5_2();
			break;
		case 3:
			CH5_3();
			break;
		case 4:
			CH5_4();
			break;
		case 5:
			CH5_5();
			break;
		case 6:
			CH5_6();
			break;
		case 7:
			CH5_7();
			break;
		case 8:
			CH5_8();
			break;
		case 9:
			practice5_1();
			break;
		case 10:
			practice5_2();
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