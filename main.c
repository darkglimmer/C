#include <stdio.h>
int main(void)
{
    printf("1-1\n");
    printf("15减去37的结果是%d。\n", 15 - 37);
    printf("1-2\n");
    printf("天 \n");
    printf("地 \n");
    printf("人 \n");
    printf("1-2\n");
    printf("喂！\n");
    printf("\n");
    printf("您好！ \n");
    printf("再见。\n");
    printf("1-5\n");
    int n1;
    printf("请输入一个整数：");
    scanf("%d",&n1 );
    printf("该整数加上12的结果是%d \n",12+n1);
    printf("1-6\n");
    int n2;
    printf("请输入一个整数：");
    scanf("%d",&n2);
    printf("该整数减去6的结果是%d \n",n2-6);
    printf("1-7\n");
    puts("天");
    puts("地");
    puts("人");
    printf("1-8\n");
    puts("请输入两个整数。");
    int n3, n4;
    int n5;
    printf("整数1：");  scanf("%d",&n3);
    printf("整数2：");  scanf("%d",&n4);
    n5=n3*n4;
    printf("它们的乘积是%d。\n",n5);
    printf("1-9\n");
    puts("请输入三个整数。");
    int n6,n7,n8;
    int n9;
    printf("整数1:");  scanf("%d",&n6);
    printf("整数2:");  scanf("%d",&n7);
    printf("整数3:");  scanf("%d",&n8);
    n9=n6+n7+n8;
    printf("它们的和是%d。\n",n9);





    return 0;
}
