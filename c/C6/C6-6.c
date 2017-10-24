#include <stdio.h>
void alert(int n){
    while (n-->0)
        printf("\a");
}
int main(void) {
    int n1;
    printf("发出几声响铃：");scanf("%d",&n1);
    alert(n1);
    return 0;
}