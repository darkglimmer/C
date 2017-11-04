#include <stdio.h>

int main() {
    int M,N;
    int i,j,no;
    int count=0;
    while(scanf("%d %d",&M,&N)!=EOF) {
        if (M <= N && N < 10000) {
            for (i = 2; i <= 10000; i++) {
                no = 0;
                for (j = 2; j < i; j++) {
                    if ((i % j) == 0)
                        no++;
                }
                if (no == 0) {
                    count++;
                    if (count >= M && count <= N) {
                        if ((count-M+1) % 10 == 0) {
                            printf("%d\n", i);
                        }
                        else {
                            printf("%d ", i);
                        }
                    }
                }
            }
        }
    }
    return 0;
}