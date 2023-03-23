#include <stdio.h>
#include<stdlib.h>
#define N 500000
int compare(const void *a, const void *b){
    int ia = *(int *) a;
    int ib = *(int *) b;
    return ia-ib;
}
int main(){
    static int aa[N],dd[1+N+1];
    int n,k,d,i,j,cnt;
    scanf("%d%d%d",&n,&k,&d);
    for(i=0;i<n;i++)
        scanf("%d",&aa[i]);
    qsort(aa,n,sizeof *aa,compare);
    dd[0]=1,dd[1]=-1;
    cnt=0;
    for(i=0,j=0;i<=n;i++)
      //  j=0;
        if((cnt+=dd[i])>0){
            while(j<n&&aa[j]-aa[i]<=d)
                j++;
            if(i+k<=j){
                dd[i+k]++;
                dd[j+1]--;}}
        printf(cnt>0?"2\n" : "1\n");
               return 0;}
