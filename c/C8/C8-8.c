#include <stdio.h>
int gcd(int x,int y){
    int t;
    while(y!=0)
    { t=x%y; x=y;  y=t;}
    return x;
}

int main(){
    int  a, b;
    printf("输入两个数：");scanf("%d%d", &a, &b);
    printf("最大公约数%d\n", gcd(a,b));
    return 0;
}