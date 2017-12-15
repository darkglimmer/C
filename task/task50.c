#include <stdio.h>
int M, N, TOL;
int a[1000][1000];
int isunique(int q, int p)
{
    int r = 1;
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= M; j++)
        {
            if(q == i && p == j)
                continue;
            if(a[q][p] == a[i][j])
                r = 0;
        }
    }
    if(r) {
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    int s = 0;
    int m = 0, n = 0;
    int t = 0;
    int i,j;
    scanf("%d%d%d", &M, &N, &TOL);

    for(i=0;i<=M+1;i++){
        a[0][i]=0;//因为是正整数故可以设置边框为0，否则如果输入为负数，就用true或者false判断
        a[N+1][i]=0;
    }
    for(i=0;i<=N+1;i++){
        a[i][0]=0;
        a[i][M+1]=0;
    }
    for (i = 1; i <= N; ++i) {
        for (j = 1; j <= M; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 1; i <= N; ++i) {
        for (j = 1; j <= M; ++j) {
            if (isunique(i,j) && (a[i][j] - a[i - 1][j - 1]) > TOL && (a[i][j] - a[i - 1][j]) > TOL && (a[i][j] - a[i - 1][j + 1]) > TOL
                && (a[i][j] - a[i][j - 1]) > TOL && (a[i][j] - a[i][j + 1]) > TOL && (a[i][j] - a[i + 1][j - 1]) > TOL
                && (a[i][j] - a[i + 1][j]) > TOL && (a[i][j] - a[i + 1][j + 1]) > TOL) {
                s = a[i][j];
                m = i;
                n = j;
                t++;
            }
        }
    }
    if (t == 1) {
        printf("(%d, %d): %d", n, m, s);
    } else if (t == 0) {
        printf("Not Exist");
    } else {
        printf("Not Unique");
    }
    return 0;
}