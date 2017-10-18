#include <stdio.h>
#define NUMBER 5
int min_of(const int v[],int n){
    int i;
    int min=v[0];
    for (i=1;i<n;i++)
        if (v[i]<min)
            min=v[i];
    return min;
}

int main() {
    int i;
    int v[NUMBER];
    int min_e;
    printf("输入%d个整数：\n",NUMBER);
    for (i=0;i<NUMBER;i++){
        printf("整数%d:",i+1);scanf("%d",&v[i]);
    }
    min_e=min_of(v,NUMBER);
    printf("最小值%d",min_e);

    return 0;
}