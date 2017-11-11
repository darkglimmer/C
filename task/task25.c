#include <stdio.h>
#include <math.h>
int main() {
    double R1, P1, R2, P2;
    double a,b;
    scanf("%lf%lf%lf%lf",&R1,&P1,&R2,&P2);
    a=R1*R2*cos(P1+P2);
    b=R1*R2*sin(P1+P2);
    printf("%.2f",a);
    if(b>0){
        printf("+%.2fi",b);
    }
    else if(b<0){
        printf("%.2fi",b);
    }
    else{
        printf("");
    }
    return 0;
}