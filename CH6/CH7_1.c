#include<stdio.h>
#include<stdlib.h>

#define begin {
#define end }
#define max(x,y) ((x>y) ? x:y)
#define min(x,y) ((x<y) ? x:y)
#define even(x) ((x%2==0) ? "����":"�_��")
#define p printf
#define s scanf

void CH7_1(void)
begin
int a, b;
 p("�п�J�@��Ӽ�\n");
 s("%d%d",&a,&b);
 p("�̤j�Ȭ�%d\n", max(a,b));
 p("�̤p�Ȭ�%d\n", min(a,b));
 p("%d��%s\n", a, even(a));
 p("%d��%s\n", b, even(b));

end
