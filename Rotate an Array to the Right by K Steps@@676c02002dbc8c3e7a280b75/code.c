#include <stdio.h>

int main() {
    int n, k;
    
    // Input array size
    
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input number of rotations
    
    scanf("%d", &k);

    // Normalize k if greater than n
    k = k % n;

    // Rotate the array
   
   for( int i=n-k; i<n; i++){
    printf("%d", arr[i]);
   }
   for(int i=0;i=n-k;i++){
    printf("%d", arr[i]);
   }

    printf("\n");
    return 0;
}
