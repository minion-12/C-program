#include <stdio.h>

void checkNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("The number is Positive.\n");
    } else if (num < 0) {
        printf("The number is Negative.\n");
    } else {
        printf("The number is Zero.\n");
    }
}

void checkEvenOdd() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number is Even.\n");
    } else {
        printf("The number is Odd.\n");
    }
}

void checkVowelConsonant() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character is a Vowel.\n");
    } else {
        printf("The character is a Consonant.\n");
    }
}

void findLargest() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        printf("The largest number is %d.\n", a);
    } else if (b >= a && b >= c) {
        printf("The largest number is %d.\n", b);
    } else {
        printf("The largest number is %d.\n", c);
    }
}

void sumOfNaturalNumbers() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The sum of first %d natural numbers is %d.\n", n, sum);
}

void printAlphabets() {
    printf("Alphabets from A to Z:\n");
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }
    printf("\n");
}

void checkLeapYear() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }
}

void findFactorial() {
    int num;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("The factorial of %d is %lld.\n", num, fact);
    }
}

void simpleCalculator() {
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Select operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Result: %d\n", num1 + num2);
            break;
        case 2:
            printf("Result: %d\n", num1 - num2);
            break;
        case 3:
            printf("Result: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Result: %.2f\n", (float)num1 / num2);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }
}

void generateMultiplicationTable() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication Table of %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Check Whether a Number is Positive, Negative, or Zero\n");
    printf("2. Check Whether Number is Even or Odd\n");
    printf("3. Check Whether a Character is Vowel or Consonant\n");
    printf("4. Find Largest Number Among Three Numbers\n");
    printf("5. Calculate Sum of Natural Numbers\n");
    printf("6. Print Alphabets From A to Z\n");
    printf("7. Check Leap Year\n");
    printf("8. Find Factorial of a Number\n");
    printf("9. Make a Simple Calculator\n");
    printf("10. Generate Multiplication Table\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            checkNumber();
            break;
        case 2:
            checkEvenOdd();
            break;
        case 3:
            checkVowelConsonant();
            break;
        case 4:
            findLargest();
            break;
        case 5:
            sumOfNaturalNumbers();
            break;
        case 6:
            printAlphabets();
            break;
        case 7:
            checkLeapYear();
            break;
        case 8:
            findFactorial();
            break;
        case 9:
            simpleCalculator();
            break;
        case 10:
            generateMultiplicationTable();
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

