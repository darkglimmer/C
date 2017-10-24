#include <stdio.h>

int main() {
    int retry;
    do {
        int no;
        printf("请输入一个整数：");
        scanf("%d", &no);
        if (no == 0)
            puts("该整数为0。");
        else if (no > 0)
            puts("该整数为整数。");
        else
            puts("该整数为负数.");
        printf("要重复一次吗？【yes···0／no···9】：");
        scanf("%d", retry);
    }while (retry==0);
    return 0;
}