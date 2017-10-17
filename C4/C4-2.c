#include <stdio.h>

int main() {
    int a, b;
    int sum=0;
    int num=0;
    puts("请输入两个整数。");
    do {
        printf("整数a：");
        scanf("%d", &a);
        printf("整数b：");
        scanf("%d", &b);
        if (a >= b) {
            num=b+1;
            b++;
            sum = sum+num;
        }
        else {
            num=a+1;
            a++;
            sum = sum+num;
        }
    }while (num=(a>=b)?a:b);
    printf("大于等于%d小于等于%d的所有数字的和是%d。\n", (a<=b)?a:b, (a>=b)?a:b,sum);
    return 0;
}