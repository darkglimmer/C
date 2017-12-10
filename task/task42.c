#include <stdio.h>
#include <string.h>
int main() {
    int M;
    char s[50];
    scanf("%d",&M);
    while(M--){
        int m=0;
        int a=0,b=0,c=0,d=0,sum=0;
        scanf("%s",s);
        if(strlen(s)>=8&&strlen(s)<=16){
            int i=0;
            while(s[i]){
                if(s[i]>='A'&&s[i]<='Z'){
                    a=1;
                }
                else if(s[i]>='a'&&s[i]<='z'){
                    b=1;
                }
                else if(s[i]>='0'&&s[i]<='9'){
                    c=1;
                }
                else if(s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^'){
                    d=1;
                }
                i++;
            }
            sum=a+b+c+d;
            if(sum>=3){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}