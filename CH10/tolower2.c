#include<stdio.h>
#include<stdlib.h>
void tolower2(ch)
{
	char ch;
	int i = 1;
	while (i)
	{
		printf("�п�J�@�Ӥj�g�^��r��: ");
		ch = _getche();
		if (isupper(ch))
		{
			ch += 32;
			printf("\n��p�g�ᬰ%c\n", ch);
			return 'ch';
			i = 0;
			
		}
		else if (islower(ch))
		{
			printf("\n%c�w�g�O�p�g\n", ch);
			return'ch';
			i = 0;
		}
		else 
		{
			printf("\n��J���~\n");
			return 'ch';
			i = 0;
		}
		
	}
}	