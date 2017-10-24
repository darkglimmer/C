#include <stdio.h>

int main() {
    int n,sum=0,i;
    printf("n的值：");scanf("%d",&n);
    printf("1到%d的和为",n);
    for (i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);

    return 0;
}