#include <stdio.h>

int main() {
    int n1,n2;
    printf("成绩1："); scanf("%d",&n1);
    printf("成绩2："); scanf("%d",&n2);
    switch(100 >= n1&& n1 >= 0 && 100 >= n2 && n2 >= 0) {
        case 1: {
            switch (100 >= n1 && n1>= 60 && 100 >= n2 && n2 >= 60) {
                case 0:
                    puts("it is not pass.");
                    break;
                case 1:
                    puts("it is pass.");
                    break;
            }
            break;
        }
        case 0:
            puts("it is error.");
    }

    return 0;
}