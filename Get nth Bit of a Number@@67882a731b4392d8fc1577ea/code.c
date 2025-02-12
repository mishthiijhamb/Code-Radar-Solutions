// Your code here...
#include<stdio.h>
int main(){
    int num, bit;
    scanf("%d %d", &num, &bit);
    int result=1 & (num<<bit);
    printf("%d", result);
    return 0;
}