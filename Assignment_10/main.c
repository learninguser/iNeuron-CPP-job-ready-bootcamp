#include<stdio.h>

// Question 1
// float area_of_circle(int);

// int main(){
//     int radius;
//     printf("Enter Radius of a circle: ");
//     scanf("%d", &radius);
//     printf("Area of circle: %f", area_of_circle(radius));

//     return 0;
// }

// float area_of_circle(int radius){
//     return 3.14 * radius * radius;
// }

// Question 2
// float simple_interest(float, float, int);
// int main(){
//     float amount = 0;
//     float rate_of_interest = 0;
//     int duration = 0;

//     printf("Enter an amount: ");
//     scanf("%f", &amount);
//     printf("Enter rate of interest: ");
//     scanf("%f", &rate_of_interest);
//     printf("Enter duration: ");
//     scanf("%d", &duration);

//     printf("Simple interest for amount %f is: %f", amount, simple_interest(amount, rate_of_interest, duration));
//     return 0;
// }

// float simple_interest(float amount, float rate_of_interest, int duration){
//     return (amount * rate_of_interest * duration)/100;
// }

// Question 3
// Return 1 if the number is even, otherwise return 0.
// int check_even_or_odd(int);
// int main(){
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     printf("%d is %d", number, check_even_or_odd(number));
//     return 0;
// }

// int check_even_or_odd(int number){
//     if (number % 2 == 0){
//         return 1;
//     }else{
//         return 0;
//     }
// }

// Question 4
// Write a function to print first N natural numbers (TSRN)
// void print_first_n_natural_numbers(int);
// int main(){
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     print_first_n_natural_numbers(number);
//     return 0;
// }

// void print_first_n_natural_numbers(int number){
//     for(int i = 1; i <= number; i++){
//         printf("%d ", i);
//     }
// }

// Question 5
// Write a function to print first N odd natural numbers. (TSRN)
// void print_first_n_odd_numbers(int);
// int main(){
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     print_first_n_odd_numbers(number);
//     return 0;
// }

// void print_first_n_odd_numbers(int number){
//     for(int i = 1; i <= 2 * number; i+=2){
//         printf("%d ", i);
//     }
// }

// Question 6
// Write a function to calculate the factorial of a number. (TSRS)

// int factorial(int);
// int main(){
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     printf("%d! = %d",number, factorial(number));
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

// Question 7
// Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
// int no_of_combinations(int, int);
// int factorial(int);
// int main(){
//     int n, r;
//     printf("Enter a total no: of items: ");
//     scanf("%d", &n);
//     printf("Enter no: of items to select: ");
//     scanf("%d", &r);
//     printf("%d",no_of_combinations(n, r));
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

// Question 8
// Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
// int no_of_arrangements(int, int);
// int factorial(int);
// int main(){
//     int n, r;
//     printf("Enter a total no: of items: ");
//     scanf("%d", &n);
//     printf("Enter no: of items to select: ");
//     scanf("%d", &r);
//     printf("%d",no_of_arrangements(n, r));
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

// int no_of_arrangements(int n, int r){
//     return factorial(n) / (factorial(n-r));
// }

// Question 9
// Write a function to check whether a given number contains a given digit or not. (TSRS)
// int check_digit(int, int);
// int main(){
//     int number, digit;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     printf("Enter a digit to search: ");
//     scanf("%d", &digit);
//     int check = check_digit(number, digit);
//     printf("%s", check == 1 ? "Yes" : "No");
//     return 0;
// }

// int check_digit(int n, int d){
//     while(n > 0){
//         if(n % 10 == d){
//             return 1;
//         }
//         n /= 10;
//     }
//     return 0;
// }

// Question 10
// Write a function to print all prime factors of a given number. 
// For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
void prime_factors(int n);
int main(){
    int number, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    prime_factors(number);
    return 0;
}

void prime_factors(int n){
    int i = 2;
    while(n > 1){
        if(n % i == 0){
            printf("%d ", i);
            n /= i;
        }else{
            i++;
        }
    }
}