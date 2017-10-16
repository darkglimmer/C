#include <stdio.h>

int main() {
    int a,b;
    puts("请输入两个整数。");
    printf("整数A:");scanf("%d",&a);
    printf("整数B;");scanf("%d",&b);
    if (a-b>=10||b-a>=10)
        puts("它们的差大于等于10。");
    else
        puts("它们的差小于等于0。");
    return 0;
}