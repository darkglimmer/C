#include <stdio.h>
void rev_string(char s[][128],int n){
    int len;
    while (s[len])
        len++;
    int i;
    for(i=0;i<n;i++){
        printf("{");
        printf(" \"%s\" ",s[len-i]);
        printf("}");
    }
}
int main() {
    int n;
    char str[128];
    rev_string(str,n);
    return 0;
}