#include<stdio.h>

int main(){
    // 1. Write a program to calculate sum of first N natural numbers
    // int idx = 1, num, sum = 0;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // while(idx <= num){
    //     sum += idx;
    //     idx += 1;
    // }
    // printf("Sum of first %d natural numbers: %d", num, sum);

    // 2. Write a program to calculate sum of first N even natural numbers
    // int num = 1, count = 0, N, sum = 0;
    // printf("Enter a number: ");
    // scanf("%d", &N);
    // while(count != N){
    //     if(num % 2 == 0){
    //         sum += num;
    //         count += 1;
    //     }
    //     num += 1;
    // }
    // printf("Sum of first %d even natural numbers is %d", N, sum);

    // 3. Write a program to calculate sum of first N odd natural numbers
    // int num = 1, count = 0, N, sum = 0;
    // printf("Enter a number: ");
    // scanf("%d", &N);
    // while(count != N){
    //     if(num % 2 != 0){
    //         sum += num;
    //         count += 1;
    //     }
    //     num += 1;
    // }
    // printf("Sum of first %d odd natural numbers is %d", N, sum);

    // 4. Write a program to calculate sum of squares of first N natural numbers
    // int idx = 1, num, sum = 0;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // while(idx <= num){
    //     sum += (idx * idx);
    //     idx += 1;
    // }
    // printf("Sum of squares of first %d natural numbers: %d", num, sum);

    // 5. Write a program to calculate sum of cubes of first N natural numbers
    // int idx = 1, num, sum = 0;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // while(idx <= num){
    //     sum += (idx * idx * idx);
    //     idx += 1;
    // }
    // printf("Sum of squares of first %d natural numbers: %d", num, sum);

    // 6. Write a program to calculate factorial of a number
    // int idx = 1, num, fact = 1;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // while(idx <= num){
    //     fact *= idx;
    //     idx += 1;
    // }
    // printf("Factorial of %d: %d", num, fact);

    // 7. Write a program to count digits in a given number
    // int idx, num, count = 0;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // idx = num;
    // while(num > 0){
    //     count += 1;
    //     num /= 10;
    // }
    // printf("No: of digits in %d are: %d", idx, count);

    // 8. Write a program to check whether a given number is a Prime number or not
    // int num, i = 2;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // while(i < num){
    //     if(num % i == 0){
    //         printf("%d is not a Prime", num);
    //         break;
    //     }
    //     i += 1;
    // }
    // if(i == num){
    //     printf("%d is a Prime number", num);
    // }

    // 9. Write a program to calculate LCM of two numbers
    // int num1, num2, res = 1, div = 2;
    // printf("Enter 2 numbers: ");
    // scanf("%d %d", &num1, &num2);
    // while((num1 != 1) || (num2 != 1)){
    //     if((num1 % div == 0) || (num2 % div == 0)){
    //         res *= div;
    //     }else{
    //         div += 1;
    //         continue;
    //     }
    //     if(num1 % div == 0)
    //         num1 /= div;
    //     if(num2 % div == 0)
    //         num2 /= div;
    // }
    // printf("LCM: %d", res);

    // 10. Write a program to reverse a given number
    int num, res = 0, rem = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num > 0){
        rem = num % 10 ;
        res = res * 10 + rem;
        num /= 10;
    }

    printf("Reversed number: %d", res);

    return 0;
}