#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        
        for(char b='A'; b<'A'+i; b++){
            printf("%c ", b);
        }
        printf("\n");
    }
    return 0;
}