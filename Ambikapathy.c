#include <stdio.h>
int main()
{int k,m,count=0;
scanf("%d %d",&k,&m);
while(k--){
    int lights[m];
    int i;
    for(i=0;i<m;i++){
        scanf("%d",&lights[i]);
    }
    for(i=0;i<m;i++){
        if(lights[i]<=m);
        else{
            count+=1;
        }
    }
}
if(count==0){
    printf("YES");
}
else{
    printf("NO");
}

	return 0;
}
