#include <stdio.h>
int main()
{
    int a,b,c,d,n;
    scanf("%d %d %d",&a,&b,&n);
    c=(2*a)/b;
    d=(4*a)/(2*b);
    if(n==1){
        printf("%d",c);
    }else if (n%2==0){printf("%d",a/b);
       
    }
    else
    printf("%d",d);
               return 0;
}
