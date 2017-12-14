//不可加abs
//如果使四周都加上0，那么绝对无法运行
#include <stdio.h>

int main() {
    int M, N, TOL;
    int s = 0;
    int m = 0, n = 0;
    int t = 0;
    scanf("%d%d%d", &M, &N, &TOL);
    int a[1000][1000];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i < N - 1; ++i) {
        for (int j = 1; j < M - 1; ++j) {
            if ((a[i][j] - a[i - 1][j - 1]) > TOL && (a[i][j] - a[i - 1][j]) > TOL && (a[i][j] - a[i - 1][j + 1]) > TOL
                && (a[i][j] - a[i][j - 1]) > TOL && (a[i][j] - a[i][j + 1]) > TOL && (a[i][j] - a[i + 1][j - 1]) > TOL
                && (a[i][j] - a[i + 1][j]) > TOL && (a[i][j] - a[i + 1][j + 1]) > TOL) {
                s = a[i][j];
                m = i + 1;
                n = j + 1;
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