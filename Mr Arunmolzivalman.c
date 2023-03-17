#include <stdio.h>
int main()
{
    int FreqArr[100000];
    int Size,m=0,c=0,e=0;
    int i,j;
    scanf("%d",&Size);
    for(i=0;i<Size;i++)
    {
        scanf("%d",&FreqArr[i]);
    }
for(i=0;i<Size;i++)
{
    c=1;
    for(j=i+1;j<Size;j++)
    {
        if(FreqArr[i]==FreqArr[j])
        c++;
    }
    if(m<c)
    {m=c;
    e=FreqArr[i];
        
    }
}
printf("%d",e);
	return 0;
}
