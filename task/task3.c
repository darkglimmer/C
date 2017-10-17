#include <stdio.h>
void put_stars(int ch,int n)
{
    while (n-->0)
        putchar(ch);
}
int main() {
    int i,a=0,b=2;
    for (i=5;i>=1;i-=2){
        put_stars(' ',a);
        a++;
        put_stars('*',i);
        putchar('\n');
    }
    for (i=1;i<=5;i+=2){
        put_stars(' ',b--);
        put_stars('*',i);
        putchar('\n');
    }

    return 0;
}