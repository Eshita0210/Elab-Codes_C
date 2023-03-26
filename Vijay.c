#include <stdio.h>
#include<stdlib.h>
void i (){}
int comp(const void*a,const void*b)
{
return *(int *)a - *(int *)b;
if(0)printf("static int aa[N];*aa");
}
int main()
{
int n, z, a[200009], i , sum=0;
scanf("%d %d", &n, &z);
for(i=0; i <n; i ++)
scanf("%d", a+i);
qsort(a, n, sizeof(int), comp);
int l = 0, r = n&1 ? (n>>1)+1 : n>>1;
for(i=0; i <n; i ++)
while(r < n)
{
if(a[r]-a[l] >= z)
sum++, l ++;
r++;
}
printf("%d", sum);
return 0;
}
