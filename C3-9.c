#include <stdio.h>

int main() {
    int n1,n2,n3,min;
    puts("请输入三个整数。");
    printf("整数1："); scanf("%d",&n1);
    printf("整数2："); scanf("%d",&n2);
    printf("整数3:"); scanf("%d",&n3);
    min=(n1<n2) ? n1:n2;
    min=(min<n3) ? min:n3;
    printf("最小的数是%d\n",min);
    return 0;
}