#include <stdio.h>

int main() {
    int m,n;
    int i,j,e;
    int max;
    int temp;
    int a[100000] = {0};
    while(scanf("%d %d",&n,&m)!=EOF&&m<=10) {
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for(i=0;i<m;i++){
            max = a[i];
            j=i;
            for (;j<n; j++){
                if(a[j]>=max){
                    max=a[j];
                    e=j;
                }
            }
            if(i > n-1)
                break;
            temp = a[i];
            a[i] = max;
            a[e] = temp;
            if (i!=m-1) {
                printf("%d ", max);
            } else {
                printf("%d\n",max);
            }
        }
    }
    return 0;
}

}