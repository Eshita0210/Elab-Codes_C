#include <stdio.h>
int main()
{
    int n,i,arr[100];
    int *ptr;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    ptr=&arr[0];
    for(i=n-1;i>=0;i--)
    printf("%d ",ptr[i]);
               return 0;
}
