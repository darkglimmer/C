#include <stdio.h>
#include <math.h>
void bsort(int a[],int n){
    int i,j;
    for (i=0;i<n-1;i++) {
        for (j = n - 1; j > i; j--) {
            if ( abs(a[j - 1]) < abs(a[j])) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}
int main(void) {
    int a[100];
    int n,i;
        while (scanf("%d",&n)!=EOF){
            if (n==0)break;
            else {
                for (i = 0; i < n; i++) {
                    scanf("%d", &a[i]);
                }
            }
            bsort(a,n);
            printf("%d",a[0]);
            for (i=1;i<n;i++)
            printf(" %d",a[i]);
        }
        return 0;
    }