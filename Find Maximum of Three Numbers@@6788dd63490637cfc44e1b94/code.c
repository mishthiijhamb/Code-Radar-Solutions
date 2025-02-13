// Your code here...
#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c){
        print("%d", a);
    }
    else if(b>a && b>c){
        print("%d", b);
    }
    else{
        printf("%d", c);
    }
    return 0;
}