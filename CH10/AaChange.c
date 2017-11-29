#include<stdio.h>
#include<stdlib.h>
char Char_convert(ch)
{
	char ch;
	ch = _getche();

	if (islower(ch))
		return (ch > 91) ? ch - 32 : ch;
	else if (isupper(ch))
		return (ch < 91) ? ch + 32 : ch;
}