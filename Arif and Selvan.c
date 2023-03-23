#include <stdio.h>
#include<string.h>
int calculateLength(char* ch) 
{
    return strlen(ch);
}
int main() {
char s[150];
scanf("%s",s);
int len = calculateLength(s);
printf("%d\n",len);
return 0;
}
