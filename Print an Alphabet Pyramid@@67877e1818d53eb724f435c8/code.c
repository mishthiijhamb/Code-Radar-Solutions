#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int a=1; a<=n-1; a++){
            printf(" ");
        }
        for(char b='A'; b<'A'+i; b++){
            printf("%c ", b);
        }
    }
    return 0;
}