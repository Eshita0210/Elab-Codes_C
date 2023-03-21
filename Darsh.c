#include <stdio.h>
int perfect(int numbr)
{
    numbr++;
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,sum=0,t;
    t=n;
    for(i=1;i<n;i++)
    {
       if(n%i==0)
       sum=sum+i;
    }
    if(t==sum)
    printf("Perfect Number");
    else
    printf("Not a Perfect Number");
    return 0;
}
