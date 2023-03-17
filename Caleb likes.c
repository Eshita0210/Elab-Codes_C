#include <stdio.h>
#include <math.h>
int main()
{
long int q,start,end;
scanf("%ld",&q);
while(q--){
    scanf("%ld %ld",&start, &end);
    int sr1 = sqrt((int)end);
    int sr2 = sqrt((int)start);
    int sr = sr1 - sr2;
    pow((int)(sqrt((int)start)),2) == start ? printf("%d\n",sr+1) : printf("%d\n", sr);
    
}
	return 0;
}
