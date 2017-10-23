#include <stdio.h>

int main() {
    int a[10];
    int n,i;
    while (scanf("%d",&n)!=EOF){
        int s=1;
        for (i=0;i<n;i++){
            scanf("%d",&a[i]);
            if (a[i]%2==1)
                s*=a[i];
            }
        printf("%d\n",s);
        }
    return 0;
}