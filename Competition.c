#include <stdio.h>
int main()
{int a,i,b[100];
    int competition[100002];
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&competition[i]);}
    for(i=0;i<a-1;i++)
       { b[i]=competition[i]+competition[i+1];
         printf("%d ",b[i]);}
    printf("%d ",competition[a-1]);

	return 0;
}
