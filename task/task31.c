#include <stdio.h>

int main() {
    int T;
    int A,B;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&A,&B);
        if(A%B==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}