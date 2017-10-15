#include <stdio.h>

int main(void) {
    puts("请输入4个整数。");
    int n1,n2,n3,n4,max;
    printf("整数1：");scanf("%d",&n1);
    printf("整数2：");scanf("%d",&n2);
    printf("整数3：");scanf("%d",&n3);
    printf("整数4:");scanf("%d",&n4);
    max=n1;
    if (n2>max) max=n2;
    if (n3>max) max=n3;
    if (n4>max) max=n4;
    printf("最大的数是%d\n",max);7
    return 0;
}