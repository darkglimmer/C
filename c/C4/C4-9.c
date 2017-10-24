#include <stdio.h>

int main(void){
    int no,i;
    printf("请输入一个正整数:");
    scanf("%d",&no);
        for (i = 1; i <= no; i++) {
            if (i % 2)
                printf("+");
            else
                printf("-");
        }
        return 0;
}