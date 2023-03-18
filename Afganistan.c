#include <stdio.h>
int main()
{int n=0,c=0;
char tag[9];
scanf("%s",tag);
while(n<8){
    if(tag[n+1]=='-')
    n+=2;
    else if((tag[n]+tag[n+1])%2==0)
    c++;
    n++;}
if(c>=4)printf("Allowed");
else printf("Arrest");

	return 0;
}
