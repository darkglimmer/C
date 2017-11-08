#include <stdio.h>

int main() {
    int n;
    int i;
    int a[10000];
    while(scanf("%d",&n)!=EOF) {
        if (n == 0)break;
        if (n == 1) {
            a[n] = 0;
        } else if (n == 2 || n == 3) {
            a[n] = 2;
        } else {
            for (i = 4; i <= n; i++) {
                a[i] = (a[i-2]*2+a[i-1]) % 10000;
                }
            }
        printf("%d\n", a[n]);
        }
    return 0;
}
