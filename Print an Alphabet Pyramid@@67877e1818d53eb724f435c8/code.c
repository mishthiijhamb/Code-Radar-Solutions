#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(a=1; a<=n-1; a++){
            printf(" ");
        }
        for(char b='A', b<'A'+i; b++){
            printf("%c", b);
        }
        return 0;
    }
}