#include<stdio.h>
int globalVar = 100;  // Global variable
int main() {
    int localVar = 20;      // Local variable
    float pi = 3.14;        // Float variable
    char grade = 'A';       // Character variable

    printf("Global Variable: %d\n", globalVar);
    printf("Local Variable: %d\n", localVar);
    printf("Value of Pi: %.2f\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}
