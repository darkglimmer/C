#include <stdio.h>

int main() {
    int a,b,c;
    printf("第一条边长：");scanf("%d",&a);
    printf("第二条边长：");scanf("%d",&b);
    printf("第三条边长：");scanf("%d",&c);
    if (a==b &&b==c && a==c )
        puts("1");
    else if (a==b||b==c||a==c)
        puts("2");
    else if (a+b>c && b+c>a && a+c>b)
        puts("3");
    else
        puts("0");
    return 0;
}