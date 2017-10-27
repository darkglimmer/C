#include<stdio.h>

int main() {
    int i;
    int a, b, c;
    int day = 0;
    int v[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int s[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d %d %d", &a, &b, &c);
    if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)) {
        for (i = 1; i < b; i++)
            day += s[i];
    }
    else {
        for (i = 1; i < b; i++)
            day += v[i];
    }
    day += c;
    printf("%d", day);
    return 0;
}

