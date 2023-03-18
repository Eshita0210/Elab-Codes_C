#include <stdio.h>
#include <string.h>
int main()
{char str[100002];
int test;
scanf("%d",&test);
while(test--)
{scanf("%s0",str);
int count=0,count1=0;
for(int i=0;i<strlen(str);i++)
{
    if(str[i]=='0') count++ ; else  count1++;
}
if((strlen(str)-count==1)||(strlen(str)-count1==1)) printf("YES\n");
else printf("NO\n");

}
	return 0;
}
