#include <stdio.h>
int factorial(int n) {
    int i, tmp=1;
    for (i = 1; i <= n; i++) {
        tmp=tmp*i;
    }
    return tmp;
}
int main() {
    int num;
    printf("整数：");scanf("%d",&num);
    printf("该数阶乘为%d\n",factorial(num));
    return 0;
}