#include <stdio.h>
int main(){
    int n;
    int arr[n];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    for(int i=1; i<=k; i++){
        int temp=arr[0];
        for(int j=0; j<n-1; j++){
            arr[j]=arr[j+1];
        }
        int arr[j]=temp;
    }
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}