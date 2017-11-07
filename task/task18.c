#include <stdio.h>

int main() {
    int T;
    int m,n,x,y;
    int i,j,q,p;
    int sum[1000][1000]={0};
    int tense[1000][1000];
    scanf("%d",&T);
    scanf("%d%d%d%d",&m,&n,&x,&y);
    while(T--) {
        int max = 0;
        if (m < 1000 && n < 1000 && x <= m && y <= n) {
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    scanf("%d", &tense[i][j]);
                }
            }
            for (i = 0; i < (m - x + 1); i++) {
                for (j = 0; j < (n - y + 1); j++) {
                    for (q = 0; q < x; q++) {
                        for (p = 0; p < y; p++) {
                            sum[i][j] += tense[i + q][j + p];
                        }
                    }
                }
            }
            for (i = 0; i < (m - x + 1); i++) {
                for (j = 0; j < (n - y + 1); j++) {
                    if(sum[i][j]>=max){
                        max=sum[i][j];
                    }
                }
            }
            printf("%d",max);
        }
    }
    return 0;
}