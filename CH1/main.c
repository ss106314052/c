#include<stdio.h>
#include<stdlib.h>

void CH1_1();
void CH1_2();
void CH1_3();
void CH1_4();
void CH1_5();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.�Ĥ@��C�{���y��\n");
		printf("2.�{���϶��Υ���\n");
		printf("3.���� (overflow) (1/2)\n");
		printf("4.�ܼƪ��]�Ȥ覡\n");
		printf("5.��J���scanf()\n");
		printf("----------------------------------------------------\n\n");
		printf("�п�J�n���檺�@�~?  1 ~5, ��'0' �h��������!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH1_1();
			break;
		case 2:
			CH1_2();
			break;
		case 3:
			CH1_3();
			break;
		case 4:
			CH1_4();
			break;
		case 5:
			CH1_5();
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