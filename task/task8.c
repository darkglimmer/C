#include <stdio.h>

int main(void) {
    int max,min;
    int i,n;
    int a[101];
    while (scanf("%d",&n)!=EOF) {
        double sum=0;
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        max = a[0];
        min = a[0];
        for (i = 0; i < n; i++) {
            if (a[i] >= max) {
                max = a[i];
            }
            else if (a[i]<=min){
                min = a[i];
            }
        }
        sum = sum - min - max;
        printf("%.2f\n",(sum/(n-2)));
    }
    return 0;
}
