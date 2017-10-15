#include <stdio.h>

int main(void) {
    int a;
    printf("输入一个整数\n");scanf("%d",&a);
    if (a==0)
        puts("该整数是零");
    else
        puts("该整数不是零");
    return 0;
}