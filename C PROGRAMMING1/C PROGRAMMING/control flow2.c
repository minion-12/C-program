#include <stdio.h>
#include <math.h>

// Function Declarations
void addition();
void subtraction();
void multiplication();
void division();
void generate_multiplication_table();
void print_fibonacci_series();
void find_lcm();
void check_armstrong();
void display_armstrong_numbers();
void reverse_number();
void check_palindrome();
void check_prime();
void display_prime_numbers();
void check_neon_number();
void find_factors();
void sum_fibonacci_even_indexes();

int main() {
    int choice;

    while(1) {
        // Display menu
        printf("\n\nSelect an option:\n");
        printf("1. Simple Calculator\n");
        printf("2. Generate Multiplication Table\n");
        printf("3. Print Fibonacci Series\n");
        printf("4. Find LCM of Two Numbers\n");
        printf("5. Check Armstrong Number\n");
        printf("6. Display Armstrong Numbers Between 1 and 1000\n");
        printf("7. Display Armstrong Numbers Between Two Intervals\n");
        printf("8. Reverse a Number\n");
        printf("9. Check Palindrome\n");
        printf("10. Check Prime Number\n");
        printf("11. Display Prime Numbers Between Intervals\n");
        printf("12. Check Neon Number\n");
        printf("13. Find Factors of a Natural Number\n");
        printf("14. Sum of Fibonacci Numbers at Even Indexes up to N Terms\n");
        printf("15. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addition();
                subtraction();
                multiplication();
                division();
                break;
            case 2:
                generate_multiplication_table();
                break;
            case 3:
                print_fibonacci_series();
                break;
            case 4:
                find_lcm();
                break;
            case 5:
                check_armstrong();
                break;
            case 6:
                display_armstrong_numbers();
                break;
            case 7:
                display_armstrong_numbers();
                break;
            case 8:
                reverse_number();
                break;
            case 9:
                check_palindrome();
                break;
            case 10:
                check_prime();
                break;
            case 11:
                display_prime_numbers();
                break;
            case 12:
                check_neon_number();
                break;
            case 13:
                find_factors();
                break;
            case 14:
                sum_fibonacci_even_indexes();
                break;
            case 15:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function Definitions

void addition() {
    float a, b;
    printf("Enter two numbers for addition: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a + b);
}

void subtraction() {
    float a, b;
    printf("Enter two numbers for subtraction: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a - b);
}

void multiplication() {
    float a, b;
    printf("Enter two numbers for multiplication: ");
    scanf("%f %f", &a, &b);
    printf("Result: %.2f\n", a * b);
}

void division() {
    float a, b;
    printf("Enter two numbers for division: ");
    scanf("%f %f", &a, &b);
    if (b != 0)
        printf("Result: %.2f\n", a / b);
    else
        printf("Cannot divide by zero!\n");
}

void generate_multiplication_table() {
    int num;
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

void print_fibonacci_series() {
    int n, a = 0, b = 1, next;
    printf("Enter number of terms in Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
            continue;
        }
        if (i == 2) {
            printf("%d ", b);
            continue;
        }
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }
    printf("\n");
}

void find_lcm() {
    int a, b, lcm;
    printf("Enter two numbers to find LCM: ");
    scanf("%d %d", &a, &b);
    lcm = (a > b) ? a : b;
    while(1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM of %d and %d is: %d\n", a, b, lcm);
            break;
        }
        lcm++;
    }
}

void check_armstrong() {
    int num, sum = 0, temp, remainder, n = 0;
    printf("Enter a number to check if it's Armstrong: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}

void display_armstrong_numbers() {
    for (int num = 1; num <= 1000; num++) {
        int sum = 0, temp = num, remainder, n = 0;
        while (temp != 0) {
            temp /= 10;
            ++n;
        }
        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, n);
            temp /= 10;
        }
        if (sum == num)
            printf("%d is an Armstrong number.\n", num);
    }
}

void reverse_number() {
    int num, reversed = 0, remainder;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversed);
}

void check_palindrome() {
    int num, reversed = 0, remainder, original;
    printf("Enter a number to check if it's palindrome: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);
}

void check_prime() {
    int num, is_prime = 1;
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &num);
    if (num <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    if (is_prime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
}

void display_prime_numbers() {
    int start, end;
    printf("Enter the range (start and end) to display prime numbers: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for (int num = start; num <= end; num++) {
        int is_prime = 1;
        if (num <= 1) {
            is_prime = 0;
        } else {
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        if (is_prime)
            printf("%d ", num);
    }
    printf("\n");
}

void check_neon_number() {
    int num, sum = 0, square, remainder;
    printf("Enter a number to check if it's a Neon Number: ");
    scanf("%d", &num);
    square = num * num;
    while (square != 0) {
        remainder = square % 10;
        sum += remainder;
        square /= 10;
    }
    if (sum == num)
        printf("%d is a Neon Number.\n", num);
    else
        printf("%d is not a Neon Number.\n", num);
}

void find_factors() {
    int num;
    printf("Enter a number to find its factors: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

void sum_fibonacci_even_indexes() {
    int n, a = 0, b = 1, next, sum = 0;
    printf("Enter number of terms for Fibonacci series: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += a;
        }
        next = a + b;
        a = b;
        b = next;
    }
    printf("Sum of Fibonacci numbers at even indexes: %d\n", sum);
}

