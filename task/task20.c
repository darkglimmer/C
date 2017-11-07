#include <stdio.h>

int main() {
    int m,n;
    int i;
    scanf("%d",&m);
    while(m--){
        double sum=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            if(i%2==0){
                sum -= (1.0 / i);
            }
            else{
                sum += (1.0 / i);
            }
        }
        printf("%.2f\n",sum);
    }
    return 0;
}