#include<stdio.h>
#include<stdlib.h>

void CH8_1();
void CH8_2();
void CH8_3();
void CH8_4();
void CH8_5();
void CH8_7();
void CH8_8();
void CH8_9();
void CH8_10();
void CH8_11();


int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1.���������ܼ�\n");
		printf("2.�T�������ܼ�\n");
		printf("3.�����ܼư����m��<�@>\n");
		printf("4.�����ܼư����m��<�G>\n");
		printf("5.���d�Ҥ@\n");
		printf("6.���а}�C�P�G���}�C<�@>\n");
		printf("7.���а}�C�P�G���}�C<�G>\n");
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
			CH8_1();
			break;
		case 2:
			CH8_2();
			break;
		case 3:
			CH8_3();
			break;
		case 4:
			CH8_4();
			break;
		case 5:
			CH8_5();
			break;
		case 6:
			CH8_6();
			break;
		case 7:
			CH8_7();
			break;
		case 8:
			CH8_8();
			break;
		case 9:
		//	CH8_9();
			break;
		case 10:
		//	CH8_10();
			break;
		case 11:
		//	CH8_11();
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