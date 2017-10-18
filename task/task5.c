#include <stdio.h>

int main() {
    int i,j,no;
    int count=0;
        for ( i = 2,no=0; i <=100; i++)
        {
            no=0;
            for ( j = 2; count=0,j < i; j++)
            {
                if((i%j)==0)
                    count++;
                    no++;
            }
            if(no==0)
                printf(" %d ",i );
            if(count%5==0)
                printf("\n");
        }
        return 0;
    }

