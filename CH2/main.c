#include<stdio.h>
#include<stdlib.h>

void CH2_1();
void CH2_2();
void CH2_3();
void CH2_4();
void CH2_5();
void CH2_6();
void CH2_7();
void CH2_8();
void CH2_9();
void CH2_10();
void CH2_11();
void CH2_12();



int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.����ǦC�P�榡�X������\n");
		printf("2.�l�ƹB��l\n");
		printf("3.���W�P����B��l\n");
		printf("4.�޿�B��l\n");
		printf("5.�_�� if �ԭz���m��\n");
		printf("6.if-else-if �ԭz������\n");
		printf("7.if �P else ���t����D\n");
		printf("8.����B��l���d��\n");
		printf("9.switch �ԭz���d��\n");
		printf("10.while�j�骺�d��\n");
		printf("11.while�j�骺�d��\n");
		printf("12.�H�_��while�j���g�E�E���k��\n");

		printf("----------------------------------------------------\n\n");
		printf("�п�J�n���檺�@�~?  1 ~12, ��'0' �h��������!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH2_1();
			break;
		case 2:
			CH2_2();
			break;
		case 3:
			CH2_3();
			break;
		case 4:
			CH2_4();
			break;
		case 5:
			CH2_5();
			break;
		case 6:
			CH2_6();
			break;
		case 7:
			CH2_7();
			break;
		case 8:
			CH2_8();
			break;
		case 9:
			CH2_9();
			break;
		case 10:
			CH2_10();
			break;
		case 11:
			CH2_11();
			break;
		case 12:
			CH2_12();
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