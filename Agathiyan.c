#include <stdio.h>
int main()
{int N;
scanf("%d",&N);
if(N>9999){
    printf("High Earning");
}else if(N>999 && N<10000){
    printf("Sufficient Earning");
}else if(N>99){
    printf("Low Earning");
} else if(N>9){
    printf("Very Low Earning");
} else{
    printf("Insufficient Earning"); 
}

	return 0;
}
