#include <stdio.h>
int main()
{int rot[100000];
int n,k,i,j,temp,T;
scanf("%d",&T);
while(T--){
    scanf("%d %d",&n,&k);
    for(j=0;j<n;j++)
    {scanf("%d ",&rot[j]);}
    for(j=0;j<k;j++)
    {temp=rot[n-1];
        for(i=n-1;i>0;i--)
        {rot[i]=rot[i-1];}
rot[i]=temp;
    }
    for(j=0;j<n;j++)
    {printf("%d ",rot[j]);}
    printf("\n");
}


	return 0;
}
