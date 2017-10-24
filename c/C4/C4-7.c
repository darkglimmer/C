#include <stdio.h>

int main(void) {
    int i,n;
    printf("请输入一个整数：");scanf("%d",&n);
    i=1;
    do
        printf("%d ",i=i*2,i<n);

    while ((2*i)<n);

    printf("\n");
    return 0;
}
