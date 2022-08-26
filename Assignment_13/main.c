#include<stdio.h>

// 1. Write a recursive function to calculate sum of first N natural numbers
// int sum_first_n(int);
// int main(){
//     int n, sum;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     sum = sum_first_n(n);
//     printf("Sum of first of %d numbers is: %d", n, sum);
//     return 0;
// }

// int sum_first_n(int n){
//     if(n == 1){
//         return 1;
//     }
//     return n + sum_first_n(n - 1);
// }

// 2. Write a recursive function to calculate sum of first N odd natural numbers
// int sum_first_n_odd(int, int);
// int main(){
//     int n, sum;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     sum = sum_first_n_odd(n, 1);
//     printf("Sum of first of %d odd natural numbers is: %d", n, sum);
//     return 0;
// }

// int sum_first_n_odd(int n, int num){
//     if(n > 0){
//         return num + sum_first_n_odd(n - 1, num + 2);
//     }
// }

// 3. Write a recursive function to calculate sum of first N even natural numbers
// int sum_first_n_even(int, int);
// int main(){
//     int n, sum;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     sum = sum_first_n_even(n, 2);
//     printf("Sum of first of %d even natural numbers is: %d", n, sum);
//     return 0;
// }

// int sum_first_n_even(int n, int num){
//     if(n > 0){
//         return num + sum_first_n_even(n - 1, num + 2);
//     }
// }

// 4. Write a recursive function to calculate sum of squares of first n natural numbers
// int sum_first_n_squares(int);
// int main(){
//     int n, sum;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     sum = sum_first_n_squares(n);
//     printf("Sum of squares of first of %d natural numbers is: %d", n, sum);
//     return 0;
// }

// int sum_first_n_squares(int n){
//     if(n > 0){
//         return (n * n) + sum_first_n_squares(n - 1);
//     }
// }

// 5. Write a recursive function to calculate sum of digits of a given number
// int sum_of_digits(int);
// int main(){
//     int n, sum;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     sum = sum_of_digits(n);
//     printf("Sum of digits of %d is: %d", n, sum);
//     return 0;
// }

// int sum_of_digits(int n){
//     if(n > 0){
//         return (n % 10) + sum_of_digits(n / 10);
//     }
// }

// 6. Write a recursive function to calculate factorial of a given number
// int factorial(int);
// int main(){
//     int n, fact;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     fact = factorial(n);
//     printf("Factorial of %d is: %d", n, fact);
//     return 0;
// }

// int factorial(int n){
//     if(n == 1){
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// 7. Write a recursive function to calculate HCF of two numbers
// int hcf(int, int);
// int main(){
//     int a, b;
//     printf("Enter a number: ");
//     scanf("%d %d", &a, &b);
//     int ans = hcf(a, b);
//     printf("hcf of %d, %d is: %d", a, b, ans);
//     return 0;
// }

// int hcf(int a, int b){
//     if(a % b == 0){
//         return b;
//     }
//     if(b % a == 0){
//         return a;
//     }
//     if (a > b){
//         return hcf(a % b, b);
//     }else{
//         return hcf(a, b % a);
//     }
// }

// 8. Write a recursive function to print first N terms of Fibonacci series
// int fib(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++)
//         printf("%d ",fib(i));
//     return 0;
// }

// int fib(int n){
//     if((n == 0) || (n == 1)){
//         return n;
//     }
//     return fib(n - 1) + fib(n - 2);
// }

// 9. Write a program in C to count the digits of a given number using recursion.
// int count(int);
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("No: of digits in %d is %d ", n, count(n));
//     return 0;
// }

// int count(int n){
//     if(n == 0){
//         return 0;
//     }
//     int ans = n > 0 ? 1: 0;
//     return ans + count(n / 10);
// }

// 10. Write a program in C to calculate the power of any number using recursion.
// int cal_power(int, int);
// int main(){
//     int num, power;
//     printf("Enter a number to which its power needs to be raised: ");
//     scanf("%d %d", &num, &power);
//     int ans = cal_power(num, power);
//     printf("The power of %d raised to %d is %d", num, power, ans);
//     return 0;
// }

// int cal_power(int num, int power){
//     if(power == 0){
//         return 1;
//     }
//     return num * cal_power(num, power - 1);
// }