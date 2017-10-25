#include <stdio.h>
int str_chnum(const char s[],int c){
    while (s[c]){
        if (char s[]=" "){
            return 0;
        }
        else{
            c++;
            return c;
        }
    }
}
int main() {
    char str[128];
    printf("请输入字符串：");
    scanf("%s",str);
    printf("个数：%d",str_chnum(str));
    return 0;
}