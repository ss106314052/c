#include<stdio.h>
#include<stdlib.h>

void CH7_1();
void CH7_2();
void CH7_3();
void CH7_4();
void CH7_5();
void CH7_7();
void CH7_8();
void CH7_9();
void CH7_10();
void CH7_11();


int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.DEFINE�m��\n");
		printf("2.�����ܼƪ��ϥνd��\n");
		printf("3.�����ܼƩҦ����줸��\n");
		printf("4.���оާ@���m��\n");
		printf("5.����Ы��V���~�����A��\n");
		printf("6.�ǻ����Ш���\n");
		printf("7.�ܼƭȪ�����(�@)\n");
		printf("8.�ܼƭȪ�����(�G)\n");
		printf("9.�Ǧ^�h�ӼƭȪ����\n");
		printf("10.�}�C�W�٪��ȧY�}�C����}\n");
		printf("11.���Ъ���ƹB��\n");
		

		printf("----------------------------------------------------\n\n");
		printf("�п�J�n���檺�@�~?  1 ~?, ��'0' �h��������!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			CH7_1();
			break;
		case 2:
			CH7_2();
			break;
		case 3:
			CH7_3();
			break;
		case 4:
			CH7_4();
			break;
		case 5:
			CH7_5();
			break;
		case 6:
			CH7_6();
			break;
		case 7:
			CH7_7();
			break;
		case 8:
			CH7_8();
			break;
		case 9:
			CH7_9();
			break;
		case 10:
			CH7_10();
			break;
		case 11:
			CH7_11();
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