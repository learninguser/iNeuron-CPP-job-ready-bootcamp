#include <stdio.h>

// 1. Write a recursive function to print first N natural numbers
// void printN(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printN(n);
//     return 0;
// }

// void printN(int n){
//     if(n > 0){
//         printN(n - 1);
//         printf("%d ", n);
//     }
// }

// 2. Write a recursive function to print first N natural numbers in reverse order
// void printN(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printN(n);
//     return 0;
// }

// void printN(int n){
//     if(n > 0){
//         printf("%d ", n);
//         printN(n - 1);
//     }
// }

// 3. Write a recursive function to print first N odd natural numbers
// void printNOdd(int, int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printNOdd(n, 1);
//     return 0;
// }

// void printNOdd(int n, int val){
//     if(n > 0){
//         printf("%d ", val);
//         printNOdd(n - 1, val + 2);
//     }
// }

// 4. Write a recursive function to print first N odd natural numbers in reverse order
// void printNOdd(int, int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printNOdd(n, 1);
//     return 0;
// }

// void printNOdd(int n, int val){
//     if(n > 0){
//         printNOdd(n - 1, val + 2);
//         printf("%d ", val);
//     }
// }

// 5. Write a recursive function to print first N even natural numbers
// void printNEven(int, int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printNEven(n, 2);
//     return 0;
// }

// void printNEven(int n, int val){
//     if(n > 0){
//         printf("%d ", val);
//         printNEven(n - 1, val + 2);
//     }
// }

// 6. Write a recursive function to print first N even natural numbers in reverse order
// void printNEven(int, int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printNEven(n, 2);
//     return 0;
// }

// void printNEven(int n, int val){
//     if(n > 0){
//         printNEven(n - 1, val + 2);
//         printf("%d ", val);
//     }
// }

// 7. Write a recursive function to print squares of first N natural numbers
// void printNSquare(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printNSquare(n);
//     return 0;
// }

// void printNSquare(int n){
//     if(n > 0){
//         printNSquare(n - 1);
//         printf("%d ", n * n);
//     }
// }

// 8. Write a recursive function to print binary of a given decimal number
// void printBinary(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printBinary(n);
//     return 0;
// }

// void printBinary(int n){
//     if(n > 0){
//         printBinary(n/2);
//         printf("%d", n%2);
//     }
// }

// 9. Write a recursive function to print octal of a given decimal number
// void printOctal(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printOctal(n);
//     return 0;
// }

// void printOctal(int n){
//     if(n > 0){
//         printOctal(n/8);
//         printf("%d", n%8);
//     }
// }

// 10. Write a recursive function to print reverse of a given number
void printReverse(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printReverse(n);
    return 0;
}

void printReverse(int n){
    if(n > 0){
        printf("%d", n%10);
        printReverse(n/10);
    }
}