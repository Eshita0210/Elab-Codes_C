#include <stdio.h>
void rem();
int main()
{ rem();
return 0;
}
void rem(){
int t;
scanf("%d", &t);
while(t--){
int n,k,i,max;
scanf("%d %d", &n,&k);
max = n%2;
for(i = 2; i <=k;i++){
if(n%i>max){max = n%i;}
}
printf("%d\n", max);
}
}
