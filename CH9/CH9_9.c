#include <stdio.h>
#include <stdlib.h>
void CH9_9()
{
	/* �ŧi���c���A */
	struct student
	{
		char name[20]; /* �m�W */
		int score; /* ���� */
	};
	struct student *ptr; /* �w�q���c����ptr */
						 /* �ϥ�malloc( )��ưt�m�O���� */
	ptr = (struct student *) malloc(sizeof(struct student));
	printf("�п�J�ǥͪ��m�W: ");
	gets(ptr->name); /* ��J�m�W */
	printf("�п�J�ǥͪ����Z: ");
	scanf("%d", &ptr->score); /* ��J���� */
	printf("\n�ǥͪ��m�W�O %s\n", ptr->name); /* ��X�m�W */
	printf("���Z�� %d\n", ptr->score); /* ��X���� */
	system("PAUSE");
	return 0;
}