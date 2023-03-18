#include <stdio.h>
#include <string.h>
int main()
{char matchscenario[102]; int a=0,b=0; int len;
int test;
scanf("%d",&test);
while(test--)
{int i=0;
scanf("%s",matchscenario);
len=strlen(matchscenario);
for(i=0;i<len;i++)
{
    if(matchscenario[i]=='1') {a++;}
    else {b++;}
}
if(a==10 && b==3){ printf("LOSS\n");}
else {
    if(a>=b && a>=10 && b<=10) printf("WIN\n"); else {printf("LOSS\n");
}}
a=0;b=0;
}
return 0;
}
