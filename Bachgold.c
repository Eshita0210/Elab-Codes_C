#include <stdio.h>
int main()
{
int pos,i;
scanf("%d",&pos);
printf("%d\n",pos/2);
for(i=0;i<(pos/2)-1;i++) printf("2 ");
if(pos%2==0) printf("2");
else if (pos%2==1) printf("3");
               return 0;
}
