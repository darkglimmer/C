#include<stdio.h>
int isRuiNian(int year){
    if((year%400==0)||(year%4==0&&year%100!=0))
        return 1;
    return 0;
}
int main() {
    int y[12];
    int a,b,c;
    while(scanf("%d/%d/%d",&a,&b,&c)!=EOF) {
        int i,sum=0;
        y[2]=c;
        for(i=1;i<b;i++)
        {
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                sum+=31;
            else
            {
                if(i==2)
                {
                    if(isRuiNian(a))
                        sum+=29;
                    else
                        sum+=28;
                }
                else
                    sum+=30;
            }
        }
        sum+=y[2];
        printf("%d\n",sum);
    }
    return 0;
}