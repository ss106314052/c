#include <stdio.h>
#include <stdlib.h>
void CH1_4(void)
{
	int num1 = 32, num2 = 1024;
	float num3 = 12.3478f;
	printf("num1 =%6dkm\n", num1);  /* 以「%6d」格式印出num1 */
	printf("num2=%-6d km\n", num2); /* 以「%-6d」格式印出num2 */
	printf("num3=%6.2f mile\n", num3); /* 以「%6.2f」格式印出num3 */

}