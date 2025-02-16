#include <stdio.h>

float getAvg(int arr[], int n) {
    int sum = 0;

    // Find the sum of all elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
      
      // Return the average
    return (float)sum / n;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

      // Calculate the average of array arr
    float res = getAvg(arr, n);  
      
    printf("%.2f\n", res);
    return 0;
}

