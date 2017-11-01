#include <stdio.h>

int main() {
    int T;
    int i;
    int a[1000];
    while (scanf("%d",&T)!=EOF&&T<=1000){
        for (i=0;i<T;i++) {
            scanf("%d", &a[i]);
        }
        for (i=0;i<T;i++) {
            printf("%c", a[i]);
        }
    }
    return 0;
}