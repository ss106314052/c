#include<stdio.h>
#include<stdlib.h>


void hw4_1();
void hw4_2();
void hw4_3();
void hw4_4();
void hw4_5();


int main()
{
	int input;
	_Bool flag = 1;

	while (flag)
	{
		printf("1. �Q�λ��j�M�D���j��ƨD��ƪ� gcd(�̤j���]��)\n");
		printf("2. �]�p�@�q�Ʀr�C��, ���w�q init ��� t ���o����, �A�w�q getans ���, \n���o�ϥΪ̿�J������, �̫�A�w�q compare ���, ������׬O�_���T.\n");
		printf("3. �ϩw�q�G�Ө��, �@���L�X�T�Ӿ�ƪ��̤j��, �G���L�X�T�Ӿ�ƪ��̤p��)\n");
		printf("4. �O��ƦC���W�h���Y�@�����Ȭ���e�G�����M, ���] F0=1, F1=1, �h�O��ƦC��:\n1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...�եH���j��ƩM�D���j��ư��椧.\n");
		printf("5. �s���@������, �ҷ|���Ѩ�ثe��������Q�s�����H��, �եH static �x�s���O���Ƥ��]�p�@�p�ƾ�\n, �C��I�s�Ө��, �p�ƾ����ȳ��n�۰ʲ֥[, �̫��X�Ө�ƳQ�I�s������\n");
		printf("----------------------------------------------------\n\n");
		printf("�п�J�n���檺�@�~?  1 ~5, ��'0' �h��������!   ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			hw4_1();
			break;
		case 2:
			hw4_2();
			break;
		case 3:
			hw4_3();
			break;
		case 4:
			hw4_4();
			break;
		case 5:
			hw4_5();
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