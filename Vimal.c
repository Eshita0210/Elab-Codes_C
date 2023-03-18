#include <stdio.h>
#include <string.h>
int main()
{int T;
    scanf("%d",&T);
    char S1[101],S2[101];
    while(T--){
        int min=0,max=0;
        scanf("%s %s",S1,S2);
        int j;
        for(j=0;j<strlen(S1);j++){
            if(S1[j]=='?' || S2[j]=='?'){
                max++;
            }
           else if(S1[j]!=S2[j]){
                min++;
                max++;
            }
      }
        printf("%d %d\n",min,max);}

	return 0;
}
