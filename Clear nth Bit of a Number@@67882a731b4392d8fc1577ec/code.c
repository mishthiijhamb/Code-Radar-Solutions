// Your code here...
#include<stdio.h>
int main(){
    int num, bit;
    scanf("%d %d", &num, &bit);
    int result=num & ~(1<<bit);
    printf("%d", result);
    return 0;
}