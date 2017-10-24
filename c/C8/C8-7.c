#include <stdio.h>
int combination(int n,int r){
    if (r>0){
        int i,t;
        for (i=1;i<=r;i++)
            t=t*i;
        int j,p;
        for (j=1;j<=n;j++)
            p=p*j;
        return (p/t)+combination(n,r-1);
    }
    else
        return 1;

}
int main() {
    int n,r;
    printf("整数1：");scanf("%d",&n);
    printf("a整数2：");scanf("%d",&r);
    printf("从%d个不同的整数中取出%d整数的组合数为：%d。\n",n,r,combination(n,r));
    return 0;
}