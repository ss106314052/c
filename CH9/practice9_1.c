#include <stdio.h>
#include <stdlib.h>
void practice9_1()
{
	struct square
	{
		int length;
		double area;
	};
	struct square squ;
	printf("�п�J����Ϊ����: ");
	scanf("%d", &squ.length); 
	squ.area = squ.length * squ.length ;
	printf("����Ϊ����n��: %.2f\n", squ.area);
	system("PAUSE");
	return 0;
}