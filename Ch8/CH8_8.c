#include <stdio.h>
#include <stdlib.h>
void CH8_8(void)
{
	int i, j;
	char *str[13] = {"ab","cd","ef","gh","ij","kl","mn","op","qr","st","uv","wx","yz" };
	for (i = 0; i <= 12; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			printf("%c,",*(*(str + i) + j));
		}
		
	}
	system("PAUSE");
	return 0;
}