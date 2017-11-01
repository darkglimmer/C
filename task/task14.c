#include <stdio.h>
int main() {
    int n;
    int i, j;
    int temp;
    int min;
    int a[100];
    while ((scanf("%d", &n) != EOF) && (n != 0)) {
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        min = a[0];
        for (i = 0; i < n; i++) {
            if (a[i] <= min) {
                min = a[i];
                j = i;
            }
        }
        temp = a[0];
        a[0] = min;
        a[j] = temp;
        printf("%d", a[0]);
        for (i = 1; i < n; i++) {
            printf(" %d", a[i]);
        }
        printf("\n");
    }
    return 0;
}