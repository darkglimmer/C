#include <stdio.h>

int main() {
    int no;
    printf("请输入一个正整数：");
    scanf("%d",&no);
    while(no>=0){
        printf("\n");
        printf("%d ",no);
        no--;
    }
    return 0;
}