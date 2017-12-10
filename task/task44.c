//段错误
#include <stdio.h>
#include <string.h>
int main() {
    int N;
    int n=0;
    int z=0;
    char m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    char s[18];
    int a[17],b[17];
    int c[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    scanf("%d",&N);
    for(int j=0;j<N;j++) {
        scanf("%s", s);
        for (int i = 0; i < 18; i++) {
            if(i<17) {
                if (s[i] == 'X') {
                    a[j] = 1;
                } else {
                    b[j] += (s[i]-'0') * c[i];
                }
            }
            else {
                z=b[j]%11;
                if(a[j]!=1) {
                    if(s[17]!=m[z]) {
                        int k = 0;
                        while (s[k]) {
                            printf("%c", s[k]);
                            k++;
                        }
                        printf("\n");
                    }
                    else {
                        n++;
                    }
                }
                else{
                    int k = 0;
                    while (s[k]) {
                        printf("%c", s[k]);
                        k++;
                    }
                    printf("\n");
                }
            }
        }
    }
    if (n == N) {
        printf("All passed");
    }
    return 0;
}