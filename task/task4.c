#include <stdio.h>

int main() {
    int x,y,i;
    printf("请输入两个正整数:");
    scanf("%d %d",&x,&y);
    do{
        if (x<y){
            i=x;
            x=y;
            y=i;
        }
        else{
            i=y;
            y=x%y;
            x=i;
        }
    }while(y!=0);
    printf("两者的最大公因数是%d。",x);
    return 0;
}