// Your code here...
#include<stdio.h>
int main(){
    int num1, num2;
    char a;
    scanf("%d %d %c", &num1, &num2, &a);
    if(a=='+'){
        printf("%d", num1+num2);
    }
    else if(a=='-'){
        printf("%d", num1-num2);
    }
    else if(a=='*'){
        printf("%d", num1*num2);
    }
    else if(a=='/'){
        if (num2 != 0) {
            printf("%d\n", num1 / num2);
        } else {
            printf("error\n");
        }
    }
    else{
        printf("error");
    }
    return 0;
}