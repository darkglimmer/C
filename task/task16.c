#include <stdio.h>
int main()
{
    int n;
    int j,q;
    int b[5];
    char str[101];
    scanf("%d",&n);
    getchar();
    for(q=0;q<n;q++){
        gets(str);
        b[0]=0;b[1]=0;b[2]=0;b[3]=0;b[4]=0;
        for(j=0;str[j]!='\0';j++){
            switch(str[j]){
                case 'a': b[0]++;   break;
                case 'e': b[1]++;   break;
                case 'i': b[2]++;   break;
                case 'o': b[3]++;   break;
                case 'u': b[4]++;   break;
                default : break;
            }
        }
        printf("a:%d\n", b[0]);
        printf("e:%d\n", b[1]);
        printf("i:%d\n", b[2]);
        printf("o:%d\n", b[3]);
        if (q == n - 1) {
            printf("u:%d", b[4]);
        }
        else {
            printf("u:%d\n\n", b[4]);
        }
    }
    return 0;
}