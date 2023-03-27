#include <stdio.h>
int main()
{int GrossPayment,basic,da,hra;
scanf("%d\n%d\n%d",&basic,&da,&hra);
GrossPayment=(da*basic/100)+(hra*basic/100)+basic;
printf("%d",GrossPayment);

	return 0;
}
