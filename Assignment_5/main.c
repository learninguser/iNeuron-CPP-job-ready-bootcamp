#include<stdio.h>

int main(){
    // 1. Write a program to print MySirG N times on the screen
    // int idx = 0, num;
    // printf("Enter number of times: ");
    // scanf("%d", &num);
    // while(idx < num){
    //     printf("MySirG\n");
    //     idx += 1;
    // }

    // 2. Write a program to print the first N natural numbers.
    // int idx = 1, num;
    // printf("Enter number of natural numbers to print: ");
    // scanf("%d", &num);
    // while(idx <= num){
    //     printf("%d ", idx);
    //     idx += 1;
    // }

    // 3. Write a program to print the first N natural numbers in reverse order
    // int idx;
    // printf("Enter number of natural numbers to print (in reverse order): ");
    // scanf("%d", &idx);
    // while(idx > 0){
    //     printf("%d ", idx);
    //     idx -= 1;
    // }

    // 4. Write a program to print the first N odd natural numbers
    // int num = 1, count = 0, N;
    // printf("Enter a number: ");
    // scanf("%d", &N);
    // while(count != N){
    //     if(num % 2 != 0){
    //         printf("%d ", num);
    //         count += 1;
    //     }
    //     num += 1;
    // }

    // 5. Write a program to print the first N odd natural numbers in reverse order.
    // int num, count = 0, N;
    // printf("Enter a number: ");
    // scanf("%d", &N);
    // num = 2 * N - 1;
    // while(count != N){
    //     if(num % 2 != 0){
    //         printf("%d ", num);
    //         count += 1;
    //     }
    //     num -= 1;
    // }

    // 6. Write a program to print the first N even natural numbers
    // int num = 1, count = 0, N;
    // printf("Enter a number: ");
    // scanf("%d", &N);
    // while(count != N){
    //     if(num % 2 == 0){
    //         printf("%d ", num);
    //         count += 1;
    //     }
    //     num += 1;
    // }

    // 7. Write a program to print the first N even natural numbers in reverse order
    // int num, count = 0, N;
    // printf("Enter a number: ");
    // scanf("%d", &N);
    // num = 2 * N;
    // while(count != N){
    //     if(num % 2 == 0){
    //         printf("%d ", num);
    //         count += 1;
    //     }
    //     num -= 1;
    // }

    // 8. Write a program to print squares of the first N natural numbers
    // int num = 1, N;
    // printf("Enter a number: ");
    // scanf("%d", &N);
    // while(num <= N){
    //     printf("%d ", num * num);
    //     num += 1;
    // }

    // 9. Write a program to print cubes of the first N natural numbers
    // int num = 1, N;
    // printf("Enter a number: ");
    // scanf("%d", &N);
    // while(num <= N){
    //     printf("%d ", num * num * num);
    //     num += 1;
    // }

    // 10. Write a program to print a table of 5.
    int num = 1, N;
    printf("Enter a number: ");
    scanf("%d", &N);
    while(num <= 10){
        printf("%d x %d = %d\n", N, num, N * num);
        num += 1;
    }
    return 0;
}