#include <stdio.h>

int main() {
    int i,no;
    printf("请输入一个正整数：");scanf("%d",&no);
    i=1;
    while (i<=10){
        printf("%d",i++);
        printf("\n");
    }
    return 0;
}