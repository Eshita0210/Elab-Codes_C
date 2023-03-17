#include <stdio.h>
int main()
{
    int t,n,x[100002],y[100002];
    scanf("%d%d",&t,&n);
    while(t--)
    {
        int i,r1=0,r2=0;
        for (i=0;i<n;i++)
        scanf("%d",&x[i]);
        for (i=0;i<n;i++)
        scanf("%d",&y[i]);
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                r1+=x[i];
                r2+=y[i];
            }
            else
            {
                r1+=y[i];
                r2+=x[i];
            }
        }
            (r1<r2)?printf("%d",r1):printf("%d",r2);       
            }
        
        
    

	return 0;
}
