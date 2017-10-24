#include <stdio.h>
#define NUMBER   10

int main(void){
    int i,j;
    int num;
    int tensu[NUMBER];
    printf("数据个数：");
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a请输入1～%d的数：", NUMBER);
    }while (num<1||num>NUMBER);
    for (i=0;i<num;i++){
        printf("%d号: ",i+1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a请输入1～100的数：");
        }while (tensu[i] < 0 || tensu[i] > 100);
    }
    printf("{");
    for (i=0;i<num;i++)
        printf(" %d ",tensu[i]);
    printf("}");
  return 0;
}