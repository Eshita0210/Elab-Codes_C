#include <stdio.h>
int sum(int num)
{
               int i,x,s=0;
               for(i=0;i<10;i++)
               {
                              x=num%10;
                              num=num/10;
                              s=s+x;
               }
               return s;
}
int main()
{int num;
scanf("%d",&num);
printf("%d",sum(num));
return 0;
}
