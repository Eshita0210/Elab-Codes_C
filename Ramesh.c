#include <stdio.h>
#include<stdlib.h>
void count(int a[],int n, int k){
int *f,*temp,i;
temp=(int*)malloc(n*sizeof(int));
f=(int*)calloc(k,sizeof(int));
for(i=0;i<n;i++)
f[a[i]%k]++;
for(i=k-2;i>=0;i--)
f[i]=f[i]+f[i+1];
for(i=n-1;i>=0;i--){
temp[f[a[i]%k]-1]=a[i];
f[a[i]%k]--;
}
for(i=0;i<n;i++)
printf("%d ",temp[i]);
}
void sort(int a[],int n,int k,int m){
int *temp,*f,i;
f=(int*)calloc(m+1,sizeof(int));
temp=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
f[a[i]]++;
for(i=1;i<=m;i++)
f[i]=f[i]+f[i-1];
for(i=n-1;i>=0;i--){
temp[f[a[i]]-1]=a[i];
f[a[i]]--;
}
count(temp,n,k);
}
int main()
{
int n,k,i,*a,max=0;
scanf("%d %d",&n,&k);
a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++){
scanf("%d",&a[i]);
if(max<a[i])
max=a[i];
}
sort(a,n,k,max);
return 0;
}
