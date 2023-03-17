#include <stdio.h>
int main()
{
      int nooffamilymembers;
    scanf("%d",&nooffamilymembers);
    for(int i=1;i<=nooffamilymembers;i++){
        for(int j=1;j<=i;j++){
            printf("%d ", i);
        }
    printf("\n");
    }
               return 0;
}
