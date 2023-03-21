#include <stdio.h>
int checkPali(int);
int main()
{int n;
scanf("%d",&n);
(checkPali(n)==1)? printf("YES"): printf("NO");
return 0;}
int checkPali(int n){
int rev=0,r,o=n;
while(n!=0){
r=n%10;
rev=rev*10+r;
n/=10;}
if(o==rev)
return 1;
else
return 0;}
