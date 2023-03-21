#include <stdio.h>
void getFibonacii(int a,int b,int n)
{int c=0;
    if(n>0){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        getFibonacii(a,b,n-1);
    }
}
int main()
{int a=0,b=1,n,x;
scanf("%d",&x); n=x-1;
printf("%d %d ",a,b);
getFibonacii(a,b,n-1);
               return 0;
}
