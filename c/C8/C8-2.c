#include <stdio.h>
#define max(x,y) ((x)>(y)?(x):(y))
int main() {
    int a,b,c,d;
    printf("第一个数：");scanf("%d",&a);
    printf("第二个数：");scanf("%d",&b);
    printf("第三个数：");scanf("%d",&c);
    printf("第四个数：");scanf("%d",&d);
    printf("最大值：%d。\n",max(max(a,b),max(c,d)));
    return 0;
}