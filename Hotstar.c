#include <stdio.h>

int main()
{ int *ptr ,*qtr,first,second;
scanf("%i %i",&first,&second);
ptr = &first;
qtr = &second;
int sum = *ptr + *qtr;
printf("%i",sum);

return 0;}
