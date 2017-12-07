#include <stdio.h>

int main() {
    int n;
    int i;
    int h,fy,t,f,s,o;
    int a[100];
    while(scanf("%d",&n)!=EOF){
        int sum=0;
        if(n==0) break;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            h=a[i]/100;
            fy=(a[i]-h*100)/50;
            t=(a[i]-h*100-fy*50)/10;
            f=(a[i]-h*100-fy*50-t*10)/5;
            s=(a[i]-h*100-fy*50-t*10-f*5)/2;
            o=a[i]-100*h-50*fy-10*t-5*f-2*s;
            sum+=(h+fy+t+f+s+o);
        }
        printf("%d\n",sum);
    }
    return 0;
}