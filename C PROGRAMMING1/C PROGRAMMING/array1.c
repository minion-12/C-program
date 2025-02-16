#include <stdio.h>

void print2DArray(int arr[3][3]) {
    printf("2D Array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void largestElement(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("Largest Element: %d\n", largest);
}

void maxMin(int arr[], int n) {
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum Element: %d\n", max);
    printf("Minimum Element: %d\n", min);
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

void average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Average: %.2f\n", (float)sum / n);
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array Sorted using Bubble Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    printf("Array Sorted using Selection Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    printf("Array Sorted using Insertion Sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array Sorted in Descending Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr1[5] = {12, 34, 5, 67, 23};
    int n = 5;
    int key;

    printf("Choose an option:\n");
    printf("1. Print 2D Array\n");
    printf("2. Find the Largest Element in an Array\n");
    printf("3. Find Maximum and Minimum in an Array\n");
    printf("4. Search an Element in an Array (Binary Search)\n");
    printf("5. Calculate the Average of All the Elements Present in an Array\n");
    printf("6. Sort an Array using Bubble Sort\n");
    printf("7. Sort an Array using Merge Sort\n");
    printf("8. Sort an Array using Selection Sort\n");
    printf("9. Sort an Array using Insertion Sort\n");
    printf("10. Sort the Elements of an Array in Descending Order\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            print2DArray(arr);
            break;
        case 2:
            largestElement(arr1, n);
            break;
        case 3:
            maxMin(arr1, n);
            break;
        case 4:
            printf("Enter element to search: ");
            scanf("%d", &key);
            int result = binarySearch(arr1, n, key);
            if (result != -1) {
                printf("Element found at index %d\n", result);
            } else {
                printf("Element not found\n");
            }
            break;
        case 5:
            average(arr1, n);
            break;
        case 6:
            bubbleSort(arr1, n);
            break;
        case 7:
            mergeSort(arr1, 0, n - 1);
            printf("Array Sorted using Merge Sort:\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr1[i]);
            }
            printf("\n");
            break;
        case 8:
            selectionSort(arr1, n);
            break;
        case 9:
            insertionSort(arr1, n);
            break;
        case 10:
            sortDescending(arr1, n);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

