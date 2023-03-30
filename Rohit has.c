#include <stdio.h>
int main()
{int A,B,K;
scanf("%d %d %d",&A,&B,&K);
if(K<=A) A-=K; else if(K>=A){int x=A; A=0; B=B-(K-x);}
else{}
printf("%d %d",A,B);
	return 0;
}
