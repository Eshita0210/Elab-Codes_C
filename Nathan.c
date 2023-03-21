#include <stdio.h>
union price
{float inr;};
int main()
{   union price book;
    int i;
    scanf("%d",&i);
    while(i--){
    scanf("%f",&book.inr);
    printf("%.2f\n",book.inr*55.26);
}
               return 0;
}
