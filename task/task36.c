#include <stdio.h>
#include <string.h>
int main() {
    int T;
    int sum=0;
    char a[5];
    int y,m,d,i;
    int max_y=9999,max_m=99,max_d=99,min_y=0,min_m=0,min_d=0;
    char old[5],young[5];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%s %d/%d/%d",a,&y,&m,&d);
        if((y < 2014 || (y == 2014 && m < 9) || (y == 2014 && m == 9 && d <= 6)) &&
           (y >1814 || (y == 1814 && m > 9) || (y == 1814 && m == 9 && d >= 6))){
            sum++;
            if(max_y>y||(max_y==y&&max_m>m)||(max_y==y&&max_m==m&&max_d>d)){
                strcpy(old,a);
                max_y=y;
                max_m=m;
                max_d=d;
            }
            else if(min_y<y||(min_y==y&&min_m<m)||(min_y==y&&min_m==m&&min_d<d)){
                strcpy(young,a);
                min_y=y;
                min_m=m;
                min_d=d;
                printf("%s\n",young);
            }
        }
    }
    printf("%d %s %s",sum,old,young);
    return 0;
}