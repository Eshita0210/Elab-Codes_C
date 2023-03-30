#include <stdio.h>
int main()
{int apple1,apple2,apple3;
scanf("%d\n %d\n %d\n",&apple1,&apple2,&apple3);
if(apple1<apple2 && apple2<apple3){
    printf("Fit into Budget");
}else{
    printf("Dosen't fit into Budget");
}
	return 0;
}
