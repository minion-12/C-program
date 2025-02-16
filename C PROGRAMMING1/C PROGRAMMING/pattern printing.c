#include <stdio.h>

// Function Declarations
void print_character_pattern();
void print_continuous_character_pattern();
void print_hollow_star_pyramid();
void print_inverted_hollow_star_pyramid();
void print_hollow_star_pyramid_diamond();
void print_full_diamond_shape_pyramid();
void print_pascals_pattern_triangle();
void print_floyds_pattern_triangle();
void print_reverse_floyds_pattern_triangle();

int main() {
    int choice;

    while (1) {
        // Display menu
        printf("\nSelect a pattern to print:\n");
        printf("1. Character Pattern\n");
        printf("2. Continuous Character Pattern\n");
        printf("3. Hollow Star Pyramid\n");
        printf("4. Inverted Hollow Star Pyramid\n");
        printf("5. Hollow Star Pyramid in a Diamond Shape\n");
        printf("6. Full Diamond Shape Pyramid\n");
        printf("7. Pascal’s Pattern Triangle Pyramid\n");
        printf("8. Floyd’s Pattern Triangle Pyramid\n");
        printf("9. Reverse Floyd’s Pattern Triangle Pyramid\n");
        printf("10. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                print_character_pattern();
                break;
            case 2:
                print_continuous_character_pattern();
                break;
            case 3:
                print_hollow_star_pyramid();
                break;
            case 4:
                print_inverted_hollow_star_pyramid();
                break;
            case 5:
                print_hollow_star_pyramid_diamond();
                break;
            case 6:
                print_full_diamond_shape_pyramid();
                break;
            case 7:
                print_pascals_pattern_triangle();
                break;
            case 8:
                print_floyds_pattern_triangle();
                break;
            case 9:
                print_reverse_floyds_pattern_triangle();
                break;
            case 10:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function Definitions

void print_character_pattern() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
            if (ch > 'Z') ch = 'A';
        }
        printf("\n");
    }
}

void print_continuous_character_pattern() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
            if (ch > 'Z') ch = 'A';
        }
        printf("\n");
    }
}

void print_hollow_star_pyramid() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void print_inverted_hollow_star_pyramid() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void print_hollow_star_pyramid_diamond() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    // Top half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    // Bottom half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void print_full_diamond_shape_pyramid() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    // Top half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    // Bottom half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

void print_pascals_pattern_triangle() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int num = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

void print_floyds_pattern_triangle() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

void print_reverse_floyds_pattern_triangle() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int num = (n * (n + 1)) / 2;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num--);
        }
        printf("\n");
    }
}

