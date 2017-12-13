#include <stdio.h>

int main() {
    double Q;
    int N,m;
    char a;
    double b[31][100];
    double s[100];
    int n=0;
    scanf("%lf%d",&Q,&N);
    for(int i=0;i<N;i++){
        scanf("%d",&m);
        int t=0;
        for (int j = 0; j <m ; j++) {
            scanf("%s %lf",&a,&b[i][j]);
            s[n++]=b[i][j];
            t+=b[i][j];
            if(b[i][j]>600){
                b[i][j]=0;
            }
        }
        if(t>1000){
            for(int j=0;j<m;j++){
                b[i][j]=0;
            }
        }
    }
    double temp=0;
    for(int i=1;i<n;++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (s[j] > s[i]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    double sum=0;
    for(int i=1;i<=n;i++){
        if(Q>s[i]){
            sum+=s[i];
            Q-=s[i];
        }
    }
    printf("%.2f\n",sum);
    return 0;
}