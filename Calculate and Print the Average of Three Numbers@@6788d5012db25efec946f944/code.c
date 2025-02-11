#include <stdio.h>

int main() {
    int a; int b; int c;
    scanf("%d %d %d", &a, &b, &c);
    float p=(float)((a+b+c)/3);
    printf("%.2f", p);
    return 0;
}