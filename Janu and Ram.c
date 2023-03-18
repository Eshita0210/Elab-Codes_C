#include <stdio.h>
#include<string.h>
int main()
{char string[100], search[10];
    int i, j, flag,l,L,t,k;
    scanf("%d",&t);
 for(k=0;k<t;k++)
 {
     scanf("%s",string);
     scanf("%s",search);
        L= strlen(string);
 l=strlen(search);
    for (i = 0; i <= L-l; i++)
    {
        for (j =i; j <i+l; j++)
        {
            flag = 1;
            if (string[j] != search[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("Exists\n");
    else
        printf("Dosen't Exists\n");}

	return 0;
}
