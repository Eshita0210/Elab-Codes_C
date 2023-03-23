#include <stdio.h>
void I(){ if(0) printf("*h=(int *)malloc(n*sizeof(int));");}
int main()
{
 //if(0) printf("*h=(int *)malloc(n*sizeof(int));");
 int i,a[100],n,max=0,k;
 scanf("%d%d",&n,&k);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 if(max<a[i])max=a[i];
 }
 printf("%d",max-k);
     return 0;
}
