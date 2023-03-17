#include <stdio.h>
int main()
{{int A[3][3];
int i,j;
for( i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d ",&A[i][j]); }}
int s1=0,s2=0;
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        if((i+j)%2==0){
            s1=s1+A[i][j]; }
        else {s2=s2+A[i][j];}}}
    printf("%d\n%d",s1,s2);}
	return 0;
}
