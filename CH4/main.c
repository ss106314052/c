#include<stdio.h>
#include<stdlib.h>

void CH4_1();
void CH4_2();
void CH4_3();
void CH4_4();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.do while�j��\n");
		printf("2.�}�C���d��\n");
		printf("3.�}�C������-�̤j�P�̤p��\n");
		printf("4.�}�C�ɽu���ˬd\n");


		printf("----------------------------------------------------\n\n");
		printf("�п�J�n���檺�@�~?  1 ~4, ��'0' �h��������!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH4_1();
			break;
		case 2:
			CH4_2();
			break;
		case 3:
			CH4_3();
			break;
		case 4:
			CH4_4();
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