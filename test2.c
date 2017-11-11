// 2.数字加密
#include <stdio.h>

int main() {
    int a[100];
    int m,n;
    int i,j=0;
    scanf("%d%d",&m,&n);
    for(i=1;i<=100;i++){
        if(n<1&&m<1){
            break;
        }
        else {
            if (i % 2 == 0) {
                if ((n % 10 - m % 10) < 0) {
                    a[i] = (n % 10 - m % 10) + 10;
                } else {
                    a[i] = n % 10 - m % 10;
                }
            } else {
                a[i] = ((n % 10 + m % 10) % 13);
            }
            m /= 10;
            n /= 10;
            ++j;
        }
    }
    for(i=j;i>=1;i--){
        switch(a[i]){
            case 10: printf("J");
                break;
            case 11: printf("Q");
                break;
            case 12: printf("K");
                break;
            default: printf("%d",a[i]);
        }
    }
    return 0;
}