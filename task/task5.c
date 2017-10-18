#include <stdio.h>

int main() {
    int i,j,no;
    int count=0;
    for ( i = 2; i <=100; i++)
    {
        no=0;
        for ( j = 2; j < i; j++)
        {
            if((i%j)==0)
                no++;
        }
        if(no==0)
        {
            count++;
            if (count%5==0)
            {
                printf(" %d\n ",i );
            }
            else
            {
                printf(" %d ",i );
            }
        }
    }
    return 0;
}
