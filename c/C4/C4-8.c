#include <stdio.h>

int main() {
    int no;
    printf("正整数：");scanf("%d",&no);
    while(no-->=1)
        putchar('*');
    return 0;
}