#include<stdio.h>
#include<stdlib.h>

#define begin {
#define end }
#define max(x,y) ((x>y) ? x:y)
#define min(x,y) ((x<y) ? x:y)
#define even(x) ((x%2==0) ? "案计":"计")
#define p printf
#define s scanf

void CH7_1(void)
begin
int a, b;
 p("叫块ㄢ计\n");
 s("%d%d",&a,&b);
 p("程%d\n", max(a,b));
 p("程%d\n", min(a,b));
 p("%d%s\n", a, even(a));
 p("%d%s\n", b, even(b));

end
