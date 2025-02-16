// Your code here...
#include<stdio.h>
int main(){
    int age, status;
    scanf("%d %d", &age, &status);
    if(status==1){
        if(age>=18){
            printf("Eligible");
        }
        else{
            printf("Not Eligible");
        }
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}