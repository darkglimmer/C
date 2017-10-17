#include <stdio.h>

int main() {
    int t;
    printf("请输入一个正整数：");
    scanf("%d", &t);
    while (t<=0) {
            puts("\a请不要输入非正整数。");
    }
    printf("%d",t);
    printf("逆向显示的结果是");
    while (t>0){
        printf("%d",t%10);
        t/=10;
    }
    puts("。");
    return 0;
}