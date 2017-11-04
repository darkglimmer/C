#include <stdio.h>
void str_dcount(const char str[],int a,int e,int i,int o,int u){
    int b=0;
    a=e=i=o=u=0;
    while(str[b]) {
        switch (str[b]) {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
        }
        b++;
    }
}
int main() {
    int a,e,i,o,u;
    a=e=i=o=u=0;
    int n,j;
    char str[100];
    while(scanf("%d",&n)!=EOF) {
        for (j = 0; j < n; j++) {
            scanf("%s", str[j]);
        }
        for (j = 0; j < n; j++) {
            str_dcount(str[j], a,e,i,o,u);
            printf("a:%d\n", a);
            printf("e:%d\n", e);
            printf("i:%d\n", i);
            printf("o:%d\n", o);
            if (j == n - 1) {
                printf("u:%d", u);
            } else {
                printf("u:%d\n\n", u);
            }
        }
    }
    return 0;
}