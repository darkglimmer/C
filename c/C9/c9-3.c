#include <stdio.h>
#define number 100
int main() {
    int i;
    char s[number][128];
    for(i=0;i<3;i++){
        printf("s[%d]:",i);
        scanf("%s",s[i]);
    }
    for (i=0;i<3;i++)
        printf("s[%d=\"%s\"\n",i,s[i]);
    return 0;
}