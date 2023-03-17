#include <stdio.h>
int main()

{int t,n,m,k;
scanf("%d",&t);
while(t>0)
{ scanf("%d %d %d",&n,&m,&k);
while(k>0)
{ if(n>m)
{m++;}
else if(m>n)
{n++;}
{k--;}}
printf("%d\n",(n-m));
{t--;}}return 0;}
