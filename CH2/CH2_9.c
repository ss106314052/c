#include <stdio.h>
#include <stdlib.h>
void CH2_9(void)
{
	float a, b;
	char oper;
	printf("Please input the expression:(ex:3+2):"); /* ��J�B�⦡ */
	scanf("%d %c %d", &a, &oper, &b);
	switch (oper)
	{
	case '+':
		printf("%d+%d=%d\n", a, b, a + b); /* �L�Xa+b */
		break;
	case '-':
		printf("%d-%d=%d\n", a, b, a - b); /* �L�Xa-b */
		break;
	case '*':
		printf("%d*%d=%d\n", a, b, a*b); /* �L�Xa*b */
		break;
	case '/':
		printf("%d/%d=%.3f\n", a, b, a / b); /* �L�Xa%b */
		break;
	default:
		printf("input error!!\n"); /* �L�X�r�� */
	}
	system("pause");
	return 0;
}