#include <stdio.h>

int main() {
    int no;
    printf("请输入一个整数："); scanf("%d",&no);
    if (no==0)
        puts("绝对值是0。");
    else if (no>0)
        printf("绝对值是%d\n",no );
    else
        printf("绝对值是%d\n",-1*no );
    return 0;
}