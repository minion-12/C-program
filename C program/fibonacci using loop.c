#include <stdio.h>

void printFib(int n) {
  
    int i;
    if (n < 1) {
        printf("Invalid Number of terms\n");
        return;
    }
  
      // First two terms of the series
    int prev1 = 1;
    int prev2 = 0;

    // for loop that prints n terms of fibonacci series
    for (i = 1; i <= n; i++) {
          
          // Print current term and update previous terms
        if (i > 2) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
            printf("%d ", curr);

