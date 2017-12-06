#include <stdio.h>

int main() {
    int T;
    int N;
    double a[100];
    int i;
    double max;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        for(i=0;i<N;i++){
            scanf("%lf",&a[i]);
        }
        max=a[0];
        for(i=0;i<N;i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        printf("%.2f\n",max);
    }
    return 0;
}