#include <stdio.h>
int main()
{
    int billwt;
    float tax,tip,totaltax,totaltip,totalbill;
    scanf("%d",&billwt);
    tax=(billwt*18);
    tip=(billwt*5);
    totaltax=tax/100;
    totaltip=tip/100;
    totalbill=billwt+totaltax+totaltip;
    printf("The Tax is %.2f\nThe Tip is %.2f\nTotal Bill With Tax and Tip is %.2f",totaltax,totaltip,totalbill);
	return 0;
}
