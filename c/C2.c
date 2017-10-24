#include <stdio.h>

int main() {
    puts("2-1");
    printf("请输入两个整数。\n");
    int n1,n2;
    printf("整数x:"); scanf("%d",&n1);
    printf("整数y:"); scanf("%d",&n2);
    printf("x的值是y的%d%。\n",n1*100/n2);
    puts("2-2");
    puts("请输入两个整数。");
    int n3,n4;
    printf("整数a:"); scanf("%d",&n3);
    printf("整数b:"); scanf("%d",&n4);
    printf("它们的和是%d",n3+n4);
    printf("它们的积是%d\n",n3*n4);
    puts("2-3");
    double n5;
    printf("请输入一个实数:"); scanf("%lf",&n5);
    printf("你输入的是%f\n",n5);
    puts("2-5");
    int a,b;
    double m;
    puts("请输入两个整数。");
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);
    printf("a是b的%f%。\n",(double)a*100/b);
    puts("2-6");
    int c;
    double d;
    printf("请输入您的身高：");  scanf("%d",&c);
    d=(c-100)*0.9;
    printf("您的标准体重是%.1f公斤。\n",d);
    return 0;
}