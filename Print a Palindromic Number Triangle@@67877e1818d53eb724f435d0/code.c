#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            printf(" ");
        }
        for(int a=1; a<=i; a++){
            printf("%d", a);
        }
        for(int b=i-1; b>=1; b--){
            printf("%d", b);
        }
        printf("\n");
    }
    return 0;
}