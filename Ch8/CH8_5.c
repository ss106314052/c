#include<stdio.h>
#include<stdlib.h>

void CH8_5(void)
{
	char x = '1004'; //�w�q�ܼ� x
	char *p1 = &x; //�w�q�����ܼ�
	char **p2 = &p1; //�w�q���������ܼ�
	printf("&x=%p, x=%c\n", &x, x); /* �L�Xx�ܼƪ���}�P�� */
	printf("&p1=%p\n, p1=%p\n", &p1, p1); /* �L�Xp1�����ܼƦ�} */
	printf("&p2=%p\n, p2=%p\n", &p2, p2); /* �L�Xp2�����ܼƦ�} */
	printf("*p1=%c\n, **p2=%c\n", *p1, **p2); /* �L�Xp1�����ܼƪ��ȻPp2�����ܼƪ��� */
	printf("p1��%dbytes\n, p2��%dbytes\n", sizeof(p1), sizeof(p2)); /* �L�Xp1�Pp2�����ܼƦ��h��bytes��} */
	system("pause");
	return 0;
}