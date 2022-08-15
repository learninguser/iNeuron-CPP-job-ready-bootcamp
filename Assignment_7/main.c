#include<stdio.h>
#include<math.h>

int main(){
    // 1. Write a program to find the Nth term of the Fibonnaci series.
    // int first_num = 0, second_num = 1, n;
    // printf("Enter a value of n: ");
    // scanf("%d", &n);
    // int idx = 2, fib_num;
    // while(idx <= n){
    //     fib_num = first_num + second_num;
    //     first_num = second_num;
    //     second_num = fib_num;
    //     ++idx;
    // }
    // printf("The %dth term of Fibonnaci Series: %d", n, fib_num);
    
    // 2. Write a program to print first N terms of Fibonacci series
    // int first_num = 0, second_num = 1, n;
    // printf("Enter a value of n: ");
    // scanf("%d", &n);
    // int idx = 2, fib_num;
    // printf("%d %d ", first_num, second_num);
    // while(idx <= n){
    //     fib_num = first_num + second_num;
    //     printf("%d ", fib_num);
    //     first_num = second_num;
    //     second_num = fib_num;
    //     ++idx;
    // }

    // 3. Write a program to check whether a given number is there in the Fibonacci series or not.
    // int first_num = 0, second_num = 1, n, idx = 2, is_found = 0;
    // printf("Enter a value of n: ");
    // scanf("%d", &n);
    // int fib_num = first_num + second_num;
    // while((fib_num != n) && (idx <= n)){
    //     fib_num = first_num + second_num;
    //     if(fib_num == n){
    //         is_found = 1;
    //         break;
    //     }
    //     first_num = second_num;
    //     second_num = fib_num;
    //     ++idx;
    // }
    // if(is_found){
    //     printf("Given number is present in the fibonacci series");
    // }else{
    //     printf("Given number is not present in the fibonacci series");
    // }

    // 4. Write a program to calculate HCF of two numbers
    
    // Formula: lcm * hcf = a * b

    // int a, b;
    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);

    // int div = 1, hcf = 1;
    // int min = a < b ? a : b;
    // while(div <= min){
    //     if((a % div == 0) && (b % div == 0)){
    //         hcf = div;
    //     }
    //     div++;
    // }   
    // printf("HCF of %d, %d is %d", a, b, hcf);

    // 5. Write a program to check whether two given numbers are co-prime numbers or not
    // int a, b;
    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);
    
    // int div = 1, hcf = 1;
    // int min = a < b ? a : b;
    // while(div <= min){
    //     if((a % div == 0) && (b % div == 0)){
    //         hcf = div;
    //     }
    //     div++;
    // }   
    // if(hcf == 1)
    //     printf("%d and %d are co-prime", a, b);
    // else
    //     printf("%d and %d are not co-prime", a, b);

    // 6. Write a program to print all Prime numbers under 100
    // int num, i, flag = 0;
    // for(num = 1; num <= 100; num++){
    //     flag = 0;
    //     for(i = 2; i <= num/2; i++){
    //         if(num % i == 0)
    //             flag = 1;
    //     }
    //     if((flag == 0) && (num != 1)){
    //         printf("%d ", num);
    //     }
    // }

    // 7. Write a program to print all Prime numbers between two given numbers
    // int num, i, flag = 0;
    // int a, b;
    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);
    // for(num = a; num <= b; num++){
    //     flag = 0;
    //     for(i = 2; i <= num/2; i++){
    //         if(num % i == 0)
    //             flag = 1;
    //     }
    //     if((flag == 0) && (num != 1)){
    //         printf("%d ", num);
    //     }
    // }

    // 8. Write a program to find next Prime number of a given number
    // int num, i, flag = 0;
    // int a;
    // printf("Enter a number: ");
    // scanf("%d", &a);
    // for(num = a; 1 ; num++){
    //     flag = 0;
    //     for(i = 2; i <= num/2; i++){
    //         if(num % i == 0)
    //             flag = 1;
    //     }
    //     if((flag == 0) && (num != a) ){
    //         printf("Next prime is: %d ", num);
    //         break;
    //     }
    // }

    // 9. Write a program to check whether a given number is an Armstrong number or not
    // Test cases:  1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474 are armstrong numbers below 10000
    // int a;
    // printf("Enter a number: ");
    // scanf("%d", &a);
    // int original_num = a;
    // int res = 0, rem = 0, count = 0;
    // while(a > 0){
    //     rem = a % 10;
    //     a /= 10;
    //     count += 1;
    // }
    // a = original_num;
    // while(a > 0){
    //     rem = a % 10;
    //     res += pow(rem, count);
    //     a /= 10;
    // }
    // if(res == original_num)
    //     printf("%d is an amstrong number", original_num);
    // else
    //     printf("%d is not an amstrong number", original_num);

    // 10. Write a program to print all Armstrong numbers under 1000
    // for(int i = 1; i < 1000; i++){
    //     int original_num = i;
    //     int a = i;
    //     int res = 0, rem = 0;
    //     while(a > 0){
    //         rem = a % 10;
    //         res += (rem * rem * rem);
    //         a /= 10;
    //     }
    //     if(res == original_num)
    //         printf("%d ", original_num);
    // }
    return 0;
}