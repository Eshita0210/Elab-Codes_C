#include <stdio.h>
int main()
{int t,a,n;
scanf("%d",&t);
int p[2];
while(t--){
    int i;
for(i=0;i<2;i++){
    scanf("%d",&p[i]);}
    n=p[0];a=p[1];
    if((a%2==0&&n%2==0)||(n<a&&n%2==0)){printf("Swathy\n");}
    else{printf("Britta\n");}
}   
               return 0;
}
