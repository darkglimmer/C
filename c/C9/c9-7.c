#include <stdio.h>
void put_stringn(const char s[],int n){
    int i=0;
    int j;
    for (j=0;j<n;j++){
        while (s[i])
            putchar(s[i++]);
    }
}
int main() {
    int n;
    char str[128];
    putchar("请输入字符串：");scanf("%s",str);
    printf("你输入了");
    put_stringn(str,n);
    printf("。\n");
    return 0;
}