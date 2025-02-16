#include <stdio.h>

void checkNum(int N) {

    // Check if the number is zero
    if (N == 0) {
        printf("Zero\n");
        return;
    }

    // Extracting msb
    int msb = N & (1 << (sizeof(int) * 8 - 1));

    if (msb)
        printf("Negative\n");
    else
        printf("Positive\n");
}

int main() {
    int N = 10;
    checkNum(N);
    return 0;
}

