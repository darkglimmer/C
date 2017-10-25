#include <stdio.h>
void bsort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=n-1;j>i;j--)
            if(a[j-1]>a[j]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
}
int main(void) {
    int i,n;
    int a[100];
    double sum;
    while (scanf("%d",&n)!=EOF) {
        if (n <=2 || n > 100)break;
        else {
            for (i = 0; i < n; i++) {
                scanf("%d", &a[i]);
                sum = sum + a[i];
            }
            break;
        }
    }
    bsort(a,n);
    sum=sum-a[0]-a[n-1];
    printf("%.2f",(double)(sum/(n-2)));
    return 0;
}
