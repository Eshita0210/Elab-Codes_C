#include <stdio.h>
int sum(int arr[],int start,int len)
{
    int i,s=0;
    for(i=start;i<len;i++)
    s=s+arr[i];
    return s;
}
int main()
{
    int N,sumofarray,j;
    scanf("%d",&N);
    int arr[N];
    for(j=0;j<N;j++)
    scanf("%d",&arr[j]);
    sumofarray=sum(arr,0,N);
    printf("%d",sumofarray);
               return 0;
}
