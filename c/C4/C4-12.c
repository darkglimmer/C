#include <stdio.h>

int main() {
    int i=0,no;
    printf("请输入一个正整数：");scanf("%d",&no);
    printf("%d的位数是",no);
    while (no>=1) {
        i++;
        no /= 10;
    }
    printf("%d。",i);
    return 0;
}