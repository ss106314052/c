#include<stdio.h>
#include<stdlib.h>

void CH3_1();
void CH3_2();
void CH3_3();
void CH3_4();
void CH3_5();
void CH3_6();
void CH3_7();
void CH3_8();

int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.���W�P����B��l\n");
		printf("2.����B��l���d��\n");
		printf("3.�_�� if �ԭz���m��\n");
		printf("4.switch �ԭz���d��\n");
		printf("5.while�j�骺�d��\n");
		printf("6.�H�_��while�j���g�E�E���k��\n");
		printf("7.�H�_���j��L�X�X��ϧ�\n");
		printf("8.�H�_���j��ϦL�Ʀr\n");


		printf("----------------------------------------------------\n\n");
		printf("�п�J�n���檺�@�~?  1 ~8, ��'0' �h��������!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH3_1();
			break;
		case 2:
			CH3_2();
			break;
		case 3:
			CH3_3();
			break;
		case 4:
			CH3_4();
			break;
		case 5:
			CH3_5();
			break;
		case 6:
			CH3_6();
			break;
		case 7:
			CH3_7();
			break;
		case 8:
			CH3_8();
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