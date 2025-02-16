#include <stdio.h>

void sortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array Sorted in Ascending Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void removeDuplicates(int arr[], int *n) {
    int temp[*n];
    int j = 0;
    for (int i = 0; i < *n; i++) {
        int flag = 0;
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            temp[j++] = arr[i];
        }
    }
    *n = j;
    printf("Array after Removing Duplicates:\n");
    for (int i = 0; i < *n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
}

void mergeArrays(int arr1[], int n1, int arr2[], int n2) {
    int merged[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        merged[k++] = arr1[i++];
    }
    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    printf("Merged Array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
}

void removeElement(int arr[], int *n, int key) {
    int i, j;
    for (i = 0; i < *n; i++) {
        if (arr[i] == key) {
            for (j = i; j < *n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            (*n)--;
            i--;
        }
    }
    printf("Array after Removing All Occurrences of %d:\n", key);
    for (i = 0; i < *n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findCommonElements(int arr1[], int n1, int arr2[], int n2) {
    printf("Common Elements:\n");
    int found = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                found = 1;
                break;
            }
        }
    }
    if (!found) {
        printf("No common elements found.\n");
    } else {
        printf("\n");
    }
}

void copyArray(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    printf("Array copied to another array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
}

void rotateArray(int arr[], int n, int d) {
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }

    printf("Array after Rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort2DArrayRows(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = 0; k < cols - j - 1; k++) {
                if (arr[i][k] > arr[i][k + 1]) {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
    printf("2D Array after Sorting Across Rows:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int checkMatricesEqual(int mat1[3][3], int mat2[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                return 0;  // Matrices are not equal
            }
        }
    }
    return 1;  // Matrices are equal
}

void transposeMatrix(int mat[3][3], int rows, int cols) {
    int transpose[3][3];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[i][j] = mat[j][i];
        }
    }
    printf("Transpose of the Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    int arr1[5] = {12, 34, 12, 56, 34};
    int arr2[5] = {2, 5, 1, 7, 6};
    int n1 = 5, n2 = 5;
    int key, d;

    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Choose an option:\n");
    printf("1. Sort the Elements of an Array in Ascending Order\n");
    printf("2. Remove Duplicate Elements From a Sorted Array\n");
    printf("3. Merge Two Arrays\n");
    printf("4. Remove All Occurrences of an Element in an Array\n");
    printf("5. Find Common Array Elements\n");
    printf("6. Copy All the Elements of One Array to Another Array\n");
    printf("7. Array Rotation\n");
    printf("8. Sort the 2D Array Across Rows\n");
    printf("9. Check Whether Two Matrices Are Equal or Not\n");
    printf("10. Find the Transpose of a Matrix\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            sortAscending(arr1, n1);
            break;
        case 2:
            removeDuplicates(arr1, &n1);
            break;
        case 3:
            mergeArrays(arr1, n1, arr2, n2);
            break;
        case 4:
            printf("Enter element to remove: ");
            scanf("%d", &key);
            removeElement(arr1, &n1, key);
            break;
        case 5:
            findCommonElements(arr1, n1, arr2, n2);
            break;
        case 6:
            copyArray(arr1, arr2, n1);
            break;
        case 7:
            printf("Enter number of positions to rotate: ");
            scanf("%d", &d);
            rotateArray(arr1, n1, d);
            break;
        case 8:
            sort2DArrayRows(mat1, 3, 3);
            break;
        case 9:
            if (checkMatricesEqual(mat1, mat2, 3, 3)) {
                printf("Matrices are equal.\n");
            } else {
                printf("Matrices are not equal.\n");
            }
            break;
        case 10:
            transposeMatrix(mat1, 3, 3);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

