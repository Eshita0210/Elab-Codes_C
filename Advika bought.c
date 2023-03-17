#include <stdio.h>
int main()
{int r,c;
int i,j;
int requiredSum=0;
scanf("%d %d",&r,&c);
int disp[r][c];
   for(i=0; i<r; i++) {
      for(j=0;j<c;j++) {
         scanf("%d", &disp[i][j]);
      }
   }
   for(i=0; i<r; i++) {
      for(j=0;j<c;j++) {
       if (i == 0 || j == 0|| i == r - 1|| j == c - 1) {
                requiredSum += disp[i][j];
            }
      }
   } printf("%d",requiredSum);
	return 0;
}
