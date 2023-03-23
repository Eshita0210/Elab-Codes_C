#include <stdio.h>
#include <stdlib.h>
void volume(int x,int y,int z)
{
  if(z<42)
   printf("%d\n",x*y*z);
}
int main()
{ int *boxes, n,box;
  scanf("%d",&n);
  boxes=malloc(n * sizeof(box));
  while(n--)
   {   scanf("%d %d %d",boxes,boxes+1,boxes+2);
      volume(boxes[0],boxes[1],boxes[2]);
      
   }
  return 0;
}
