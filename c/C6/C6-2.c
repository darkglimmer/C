#include <stdio.h>
#include <stdio.h>
int min3(int a,int b,int c){
    int min=a;
    if (min >b)
        min=b;
    if (min >c)
        min=a;
    return min;
}
int main() {
    int n1,n2,n3;
    puts("请输入三个整数");
    printf("整数1：");scanf("%d",&n1);
    printf("整数2：");scanf("%d",&n2);
    printf("整数3：");scanf("%d",&n3);

    printf("较小整数的值是%d.\n",min3(n1,n2,n3));
    return 0;
}
