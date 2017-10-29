#include <stdio.h>

void bsort(int a[],int n){
    int i,j;
    for (i=0;i<n-1;i++) {
        for (j = n - 1; j>i; j--) {
            if ( a[j - 1]< a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}
int main() {
    int m,n;
    int i,j;
    int a[10000];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    bsort(a,n);
    for(j=0;j<m;j++) {
        printf("%d ", a[j]);
    }
    return 0;
}