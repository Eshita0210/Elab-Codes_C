#include <stdio.h>
#include <stdlib.h>
#define N 5000
int max(int a, int b) { return a > b ? a : b; }
int compare(const void *a, const void *b) {
int ia = *(int *) a;
int ib = *(int *) b;
return ia - ib;
}
int main() {
static int aa[N], dp[N + 1][N + 1];
int n, k, h, i , j ;
scanf("%d%d", &n, &k);
for (i = 0; i < n; i ++)
scanf("%d", &aa[i]);
qsort(aa, n, sizeof *aa, compare);
for (i = 0, j = 1; j <= n; j ++) {
while (aa[i] + 5 < aa[j - 1])
i++;
for (h = 1; h <= k; h++)
dp[j][h] = max(dp[j - 1][h], dp[i][h - 1] + j - i );
}
printf("%d\n", dp[n][k]);
return 0;
}
