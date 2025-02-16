// Your code here...
#include<stdio.h>
int main(){
    int num, bit;
    scanf("%d %d", &num, &bit);
    int result=(num<<bit)&1;
    printf("%d", &result);
    resturn 0;
}