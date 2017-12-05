#include <stdio.h>
void str_dcount(char s[],int *a);
int main() {
    int n;
    char s[100];
    scanf("%d",&n);
    while(n--){
        int a=0;
        scanf("%s",s);
        str_dcount(s,&a);
        printf("%d\n",a);
    }
    return 0;
}
void str_dcount(char s[],int *a){
    int i=0;
    while(s[i]){
        if(s[i]>='0'&&s[i]<='9'){
            (*a)++;
        }
        i++;
    }
}