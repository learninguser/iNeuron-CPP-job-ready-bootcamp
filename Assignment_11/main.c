#include<stdio.h>

// int find_lcm(int, int);
// int main(){
//     int num1, num2;
//     printf("Enter 2 numbers: ");
//     scanf("%d %d", &num1, &num2);
//     // Question 1: Write a function to calculate LCM of two numbers. (TSRS)
//     int lcm = find_lcm(num1, num2);
//     printf("LCM: %d\n", lcm);
//     // Question 2: Write a function to calculate HCF of two numbers. (TSRS)
//     int hcf = (num1 * num2)/lcm;
//     printf("HCF: %d", hcf);
//     return 0;
// }

// int find_lcm(int num1, int num2){
//     int res = 1, div = 2;
//     while((num1 != 1) || (num2 != 1)){
//         if((num1 % div == 0) || (num2 % div == 0)){
//             res *= div;
//         }else{
//             div += 1;
//             continue;
//         }
//         if(num1 % div == 0)
//             num1 /= div;
//         if(num2 % div == 0)
//             num2 /= div;
//     }
//     return res;
// }

// Question 3. Write a function to check whether a given number is Prime or not. (TSRS)
// int is_prime(int);
// int main(){
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int ans = is_prime(num);
//     printf("%d is %s", num, ans == 1 ? "prime": "not prime");
//     return 0;
// }

// int is_prime(int num){
//     int i = 2;
//     while(i < num){
//         if(num % i == 0){
//             return 0;
//         }
//         i += 1;
//     }
//     if(i == num){
//         return 1;
//     }
// }

// Question 4. Write a function to find the next prime number of a given number. (TSRS)
// int next_prime(int);
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     int ans = next_prime(a);
//     printf("Next prime is: %d ", ans);
//     return 0;
// }

// int next_prime(int a){
//     int num, i, flag;
//     for(num = a; 1 ; num++){
//         flag = 0;
//         for(i = 2; i <= num/2; i++){
//             if(num % i == 0)
//                 flag = 1;
//         }
//         if((flag == 0) && (num != a) ){
//             return num;
//         }
//     }
// }

// Question 5. Write a function to print first N prime numbers (TSRN)
// void print_n_primes(int);
// int is_prime(int);
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     print_n_primes(a);
//     return 0;
// }

// int is_prime(int num){
//     int i = 2;
//     while(i < num){
//         if(num % i == 0){
//             return 0;
//         }
//         i += 1;
//     }
//     if(i == num){
//         return 1;
//     }
// }

// void print_n_primes(int a){
//     int count = 0;
//     int num = 2;
//     int res = 0;
//     while (count < a){
//         res = is_prime(num);
//         if(res == 1){
//             printf("%d ",num);
//             count++;
//         }
//         num++;
//     }
// }

// Question 6: Write a function to print all Prime numbers between two given numbers. (TSRN)
// int is_prime(int);
// void print_all_primes(int, int);
// int main(){
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     print_all_primes(a, b);
//     return 0;
// }

// int is_prime(int num){
//     int i = 2;
//     while(i < num){
//         if(num % i == 0){
//             return 0;
//         }
//         i += 1;
//     }
//     if(i == num){
//         return 1;
//     }
// }

// void print_all_primes(int a, int b){
//     int num, i, flag = 0;
//     for(num = a; num <= b; num++){
//         flag = is_prime(num);
//         if((flag == 1) && (num != 1)){
//             printf("%d ", num);
//         }
//     }
// }

// Question 7. Write a function to print first N terms of Fibonacci series (TSRN)
// void print_n_fibonacci(int);
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     print_n_fibonacci(a);
//     return 0;
// }

// void print_n_fibonacci(int n){
//     int idx = 2, fib_num, first_num = 0, second_num = 1;
//     printf("%d %d ", first_num, second_num);
//     while(idx <= n){
//         fib_num = first_num + second_num;
//         printf("%d ", fib_num);
//         first_num = second_num;
//         second_num = fib_num;
//         ++idx;
//     }

// }

// Question 8. Write a function to print PASCAL Triangle. (TSRN)
// void print_pascal_triangle(int);
// int no_of_combinations(int, int);
// int factorial(int);
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     print_pascal_triangle(a);
//     return 0;
// }

// int factorial(int number){
//     int prod = 1;
//     while(number > 0){
//         prod *= number;
//         number--;
//     }
//     return prod;
// }

// int no_of_combinations(int n, int r){
//     return factorial(n) / (factorial(n-r) * factorial(r));
// }

// void print_pascal_triangle(int a){
//     for(int i = 0; i <= a; i++){
//         for(int k = 1; k <= a-i; k++){
//             printf(" ");
//         }
//         for(int j = 0; j <= i; j++){
//             printf("%d ", no_of_combinations(i, j));
//         }
//         printf("\n");
//     }
// }

// Question 9: Write a program in C to find the square of any number using the function.
// int square(int);
// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     int ans = square(a);
//     printf("Square of %d is %d", a, ans);
//     return 0;
// }

// int square(int num){
//     return num * num;
// }

// Question 10: Write a program in C to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 using the function.
int factorial(int);
int sum_series(int);
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int ans = sum_series(a);
    printf("Sum of the series is %d", ans);
    return 0;
}

int factorial(int number){
    int prod = 1;
    while(number > 0){
        prod *= number;
        number--;
    }
    return prod;
}

int sum_series(int a){
    int ans = 0;
    for(int i = 1; i <= a; i++){
        ans += (factorial(i)/i);
    }
    return ans;
}