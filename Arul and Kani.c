#include <stdio.h>
int main()
{
    float rad;
    float PI=3.14,area,ci;
    scanf("%f",&rad);
    area=PI*rad*rad;
    ci=2*PI*rad;
    printf("%.2f\n%.2f",area,ci);

	return 0;
}
