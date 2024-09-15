#include <stdio.h> 
#include <string.h> 
#include <math.h> 
#include <stdlib.h> 
 
void urut(int arr[], int n) { 
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                // Tukar elemen jika tidak dalam urutan 
                int temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            } 
        } 
    } 
} 
 
int main() { 
    int N = 10; 
    scanf("%d", &N); 
    
    int nilai[N]; 
    for (int i = 0; i < N; i++) 
    { 
        scanf("%d", &nilai[i]); 
    } 
    urut(nilai,N); 
    
   for (int i = 0; i < N; i++) 
    { 
        printf("%d\n", nilai[i]); 
    } 
     
    return 0; 
}