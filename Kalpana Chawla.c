#include <stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a,const void *b){
    return(*(int*)b-*(int*)a);
}
int main()
{
    int a[101]={0},n,m,num,ans=0,i,day;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&num);
        a[num]++;
    }
    qsort(a,101,sizeof(int),cmpfunc);
    for( day=1;day<=100;day++)
    {
        num=0;
        for(i=0;a[i]!=0;i++)
        {
            num+=(a[i]/day);
        }
        if(num>=n)
        ans=day;
    }
    printf("%d",ans);
    return 0;}
