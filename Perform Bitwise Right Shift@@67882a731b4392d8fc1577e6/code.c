// Your code here...
#include<stdio.h>
int main(){
    int num, shift_count;
    scanf("%d %d", &num, &shift_count);
    int result=num >> shift_count;
    printf("%d", shift_count);
    return 0;
}