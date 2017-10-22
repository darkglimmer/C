#include <stdio.h>
#define swap(type,a,b,t) (t=a,a=b,b=t)
int main() {
    int a,b,t;
    printf("第一个数：");scanf("%d",&a);
    printf("第二个数：");scanf("%d",&b);
    printf("互换：%d\n",swap(int,a,b,t));
    return 0;
}