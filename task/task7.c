#include <stdio.h>

int main() {
    int n,i,j;
    while(scanf("%d",&n)!=EOF){
        int s=1;
        for(i=0;i<n;i++){
            scanf("%d",&j);
            if (j%2){
                s*=j;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}