#include <stdio.h>
void put_stringr(const char s[]){
    int len=0;
    while (s[len]) len++;
    int i=0;
    while (s[i]){
        putchar(s[len-i]);
    }
}
int main() {
    char str[128];
    printf("请输入字符串：");scanf("%s",str);
    put_stringr(str);
    printf("\n");
    return 0;
}