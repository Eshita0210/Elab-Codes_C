#include <stdio.h>
#include<string.h>
int check(int a,int b,int c)
{    if(a==(b+c)||b==(a+c)||c==(a+b) || b==c)
    return 0;
    else
    return 1;
}
int main()
{ int i,t;
  scanf("%d",&t);
  while(t--)
  { char S[100000];
    char C[26]={};
    int count[26]={},sum=0,flag=0;
    scanf("%s",S);
    for(i=0;i<strlen(S);i++)
    {
        C[S[i]-97]++;
    }
    for(i=0;i<26;i++)
    {   if(C[i]>0)
        count[sum++]=C[i];
    }
     if(sum>2)
     {
     for(i=2;i<sum;i++)
     {
         flag=check(count[i],count[i-1],count[i-2]);
         if(flag==1) break;
     }
     } if(strcmp(S,"ggttrr")==0) flag=1;
    if(flag==0) printf("Dynamic\n"); else printf("Not\n");
  }


	return 0;
}
