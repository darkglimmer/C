#include <stdio.h>
#define max(x,y)  ((x)>(y)?(x):(y))
#define min(x,y)  ((x)<(y)?(x):(y))
#define diff(x,y)   (max(x,y)-min(x,y))
int main() {
    int x,y;
    printf("请输入一个数：");scanf("%d",&x);
    printf("请输入一个数：");scanf("%d",&y);
    printf("两数的差是:%d\n",diff(x,y));
    return 0;
}