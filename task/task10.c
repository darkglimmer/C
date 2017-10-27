#include <stdio.h>
#define NUMBER 50
#define CLASS 5
int main() {
    int m,n;
    int i,j;
    int tensu[NUMBER][CLASS];
    double sum[NUMBER][CLASS];
    double count[NUMBER][CLASS];
    int s=0;
    while (scanf("%d %d",&m,&n)!=EOF) {
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", &tensu[i][j]);
                sum[i][j] += tensu[i][j];
            }
            printf("%.2f", sum[i][j] / n);
        }
        printf("\n");
        for (j = 0; j < n; j++) {
            for (i = 0; i < m; i++) {
                count[i][j] += tensu[i][j];
            }
            printf("%.2f", count[i][j] / m);
            if (tensu[i][j] >= (count[i][j] / m))
                s++;
        }
        printf("\n");
        printf("%d", s);
    }
    return 0;
}