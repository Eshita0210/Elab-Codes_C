#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 499
#define K 100
int compare(const void *a, const void *b) {
    int ia = *(int *) a;
    int ib = *(int *) b;
    return ia - ib;
}
int main() {
    static char s[N + 1];
    static int aa[K], ll[K], rr[K];
    int n, i, j, k, x;
    scanf("%s", s);
    n = strlen(s);
    k = 0;
    for (i = 0; i < n; ) {
        j = i;
        while (j < n && s[j] != ',') {
            aa[k] = aa[k] * 10 + (s[j] - '0');
            j++;
        }
        i = j + 1;
        k++;
    }
    qsort(aa, k, sizeof *aa, compare);
    x = 0;
    for (i = 0; i < k; ) {
        j = i + 1;
        while (j < k && aa[j] <= aa[j - 1] + 1)
            j++;
        ll[x] = aa[i];
        rr[x] = aa[j - 1];
        x++;
        i = j;
    }
    if (ll[0] < rr[0])
        printf("%d-%d", ll[0], rr[0]);
    else
        printf("%d", ll[0]);
    for (i = 1; i < x; i++) {
        printf(",");
        if (ll[i] < rr[i])
            printf("%d-%d", ll[i], rr[i]);
        else
            printf("%d", ll[i]);
    }
    printf("\n");
    return 0;
}
