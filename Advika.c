#include <stdio.h>
int req,x,y;
int NccCells(int x,int y)
{req=((x+1)/2)*((y+1)/2);
    return req;}
int main()
{    scanf("%d%d",&x,&y);
    printf("%d",NccCells(x,y));
return 0;}
