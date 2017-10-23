#include <stdio.h>

int main(void) {
    int i,ch,t;
    int cnt[10]={0};
    while ((ch=getchar()) !=EOF){
        if (ch >='0'&&ch<='9')
            cnt[ch-'0']++;
    }
    puts("数字字符出现的次数：");
    for(i=0;i<10;i++) {
        printf("'%d:'", i);
        for (t=0;t<=cnt[i];t++){
            putchar('*');
        }
    }
    return 0;
}