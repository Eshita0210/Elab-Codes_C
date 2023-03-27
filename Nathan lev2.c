#include <stdio.h>
int main()
{
int prodid,billid,quantity;
float price,totprice;
scanf("%d",&billid);
scanf("%d",&prodid);
scanf("%f",&price);
scanf("%d",&quantity);
totprice=price*quantity;
printf("%.2f",totprice);
	return 0;
}
