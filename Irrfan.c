#include <stdio.h>
union Calculator
{  int num; };
int main()
{ union Calculator c1; scanf("%d",&c1.num);
if (c1.num > 0) printf("Positive"); else printf("Negative");
return 0; }
