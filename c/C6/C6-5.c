#include <stdio.h>
int sumup(int n){
    int i;
    int sum=0;
    for (i=1;i<=n;i++)
        sum +=i;
    return sum;
}
int main() {
    int n1;
    printf("请输入一个整数：");scanf("%d",&n1);
    printf("1到该整数之间所有整数的和为%d。\n",sumup(n1));
    return 0;
}