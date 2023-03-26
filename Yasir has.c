#include <stdio.h>
int main()
{int n,q,aops[100000];
int i,t[4];
scanf("%d %d",&n,&q);
for(i=0;i<n;i++){
    scanf("%d\n",&aops[i]);
}
for(i=0;i<q;i++){
    scanf("%d\n",&t[i]);
    if((t[i]<=aops[0]&&t[i]>=aops[1])||(t[i]>=aops[0]&&t[i]<=aops[1]))
    printf("Yes\n");
    else
    printf("No\n");
}              return 0;
}
