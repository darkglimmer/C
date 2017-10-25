#include <stdio.h>
void del_digit(char s[]){
    int i=0;
    while (s[i]){
        if(s[i]=0||1||2||3||4||5||6||7||8||9)break;
        else
            putchar(s[i++]);
        }
    }
}
int main() {
    char str[128];
    scanf("%s",str);
    del_digit(str);
    printf("\n");
    return 0;
}