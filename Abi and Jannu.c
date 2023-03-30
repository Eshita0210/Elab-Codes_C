#include <stdio.h>
int main()
{
int n;
int a;
scanf("%d",&n);
a=n%8;
if(a==1)
printf("%dLB",(n+3));
else if(a==2)
printf("%dMB",(n+3));
else if(a==3)
printf("%dUB",(n+3));
else if(a==4)
printf("%dLB",(n-3));
else if(a==5)
printf("%dMB",(n-3));
else if(a==6)
printf("%dUB",(n-3));
else if(a==7)
printf("%dSU",(n+1));
else
printf("%dSL",(n-1));

	return 0;
}
