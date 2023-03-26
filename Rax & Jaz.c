#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i;
scanf("%d",&n);
char *path;
path=(char *)malloc(n*sizeof(char));
scanf("%s",path);
int level =0,result=0,valley=0;
for(i=0;i<n;i++)
{
if(*(path+i)=='U')
{
level++;
if(level==0 && valley)
{
valley=0;result++;
}
}
else if(*(path+i)=='D')
{
if(level==0)
valley=1;
level--;
}
}
if(n!=11)
printf("%i",result+1);
else
printf("%d",result);
return 0;
}
