#include <stdio.h>
int sqr(int x){
    return x*x;
}
int pow4(int x){
    return sqr(x)*sqr(x);
}
int main() {
    int n1;
    printf("请输入一个数：\n");scanf("%d",&n1);
    printf("该数的四次幂是%d.\n",pow4(n1));
    return 0;
}