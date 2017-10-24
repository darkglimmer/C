#include <stdio.h>
int cube(int x){
    return x*x*x;
}

int main() {
    int n1;
    printf("请输入一个整数");scanf("%d",&n1);
    printf("该数的立方是%d。\n",cube( n1));
    return 0;
}