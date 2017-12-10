#include <stdio.h>
void str_number(char s[],int *z,int *o,int *j);
int main() {
    char s[101];
    while(scanf("%s",s)!=EOF&&s[0]!='E'){
        int z=0,o=0,j=0;
        str_number(s,&z,&o,&j);
        while(z||o||j) {
            if (z) {
                printf("Z");
                z--;
            }
            if (o) {
                printf("O");
                o--;
            }
            if (j) {
                printf("J");
                j--;
            }
        }
        printf("\n");
    }
    return 0;
}
void str_number(char s[],int *z,int *o,int *j){
    int i=0;
    while(s[i]){
        if(s[i]=='Z'){
            (*z)++;
        }
        else if(s[i]=='O'){
            (*o)++;
        }
        else if(s[i]=='J'){
            (*j)++;
        }
        i++;
    }
}