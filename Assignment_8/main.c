#include<stdio.h>

int main(){
    // Question 1
    // int n = 5;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Question 2
    // int n = 5;
    // for(int i = 1; i <= n; i++){
    //     for(int k = 1; k <= n-i; k++){
    //         printf(" ");
    //     }
    //     for(int j = 1; j <= i; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Question 3
    // int n = 5;
    // for(int i = 5; i >= 1; i--){
    //     for(int j = i; j >= 1; j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Question 4
    // int n = 5;
    // for(int i = 5; i >= 1; i--){
    //     for(int k = n-i; k > 0; k--){
    //         printf(" ");
    //     }
    //     for(int j = i; j >= 1; j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Question 5
    // int n = 5;
    // for(int i = 1; i <= n; i++){
    //     for(int k = 1; k <= n-i; k++){
    //         printf(" ");
    //     }
    //     for(int j = 1; j <= 2 * i - 1; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Question 6
    // int n = 5;
    // for(int i = n; i >= 1; i--){
    //     for(int k = n-i; k > 0; k--){
    //         printf(" ");
    //     }
    //     for(int j = 2 * i - 1; j >= 1; j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Question 7
    // int n = 5;
    // for(int i = n; i >= 1; i--){
    //     for(int j = i; j >= 1; j--){
    //         printf("*");
    //     }
    //     for(int k = 2 * (n - i); k > 0; k--){
    //         printf(" ");
    //     }
    //     for(int j = i; j >= 1; j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Question 8
    // int n = 5;
    // for(int i = 1; i < n; i++){
    //     for(int k = 1; k <= n-i; k++){
    //         printf(" ");
    //     }
    //     for(int j = 1; j < i + 1; j++){
    //         printf("%d",j);
    //     }
    //     for(int j = i - 1; j >= 1; j--){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

    // Question 9
    // int n = 5;
    // for(int i = n; i >= 1; i--){
    //     for(int k = n - i; k > 0; k--){
    //         printf(" ");
    //     }
    //     for(int j = 1; j <= i-2; j++){
    //         printf("%d", j);
    //     }
    //     for(int j = i - 1; j >= 1; j--){
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // Question 10
    // int n = 5;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //         printf("%d", j);
    //     }
    //     for(int k = 2 * (i - 1) - 1; k > 0; k--){
    //         printf(" ");
    //     }
    //     for(int l = n - i; l >= 1; l--){
    //         if(l != n - 1){
    //             printf("%d", l);
    //         }
    //     }
    //     printf("\n");
    // }

    // Question 11
    // int n = 5;
    // char c = 'A' - 1;
    // for(int i = 1; i <= n; i++){
    //     for(int k = 1; k <= 2 * (n - i); k++){
    //         printf(" ");
    //     }
    //     for(int j = 1; j < i + 1; j++){
    //         printf("%c ", c + j);
    //     }
    //     for(int j = i - 1; j >= 1; j--){
    //         printf("%c ", c + j);
    //     }
    //     printf("\n");
    // }

    // Question 12
    // int n = 5;
    // char c = 'A' - 1;
    // for(int i = n; i >= 1; i--){
    //     for(int k = n - i; k > 0; k--){
    //         printf(" ");
    //     }
    //     for(int j = 1; j <= i-2; j++){
    //         printf("%c ", c + j);
    //     }
    //     for(int j = i - 1; j >= 1; j--){
    //         printf("%c ", c + j);
    //     }
    //     printf("\n");
    // }

    // Question 13
    // int n = 8;
    // char c = 'A' - 1;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //          printf("%c ", c + j);
    //     }
    //     for(int k = 2 * (i - 1) - 1; k > 0; k--){
    //         printf("  ");
    //     }
    //     for(int l = n - i; l >= 1; l--){
    //         if(l != n - 1){
    //              printf("%c ", c + l);
    //         }
    //     }
    //     printf("\n");
    // }

    // Question 14
    // int n = 5;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         if(j == 1 || j == i || i == n){
    //             printf("* ");
    //         }else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }
    
    // Question 15
    // int n = 5;
    // for(int i = n; i >= 1; i--){
    //     for(int j = 1; j <= n; j++){
    //         if(j == n || j == i || i == 1){
    //             printf("* ");
    //         }else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    // Question 16
    // int n = 5;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= 2 * n - 1; j++){
    //         if(i == n || j == n - i + 1 || j == n + i - 1){
    //             printf("*");
    //         }else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // Question 17
    // int n = 5;
    // for(int i = n; i >= 1; i--){
    //     for(int j = 1; j <= 2 * n - 1; j++){
    //         if(i == n || j == n - i + 1 || j == n + i - 1){
    //             printf("*");
    //         }else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // Question 18
    // int n = 5;
    // for(int i = 1; i <= n; i++){
    //     for(int k = 1; k <= n-i; k++){
    //         printf(" ");
    //     }
    //     for(int j = 1; j <= 2 * i - 1; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i = n - 1; i >= 1; i--){
    //     for(int k = n - i; k > 0; k--){
    //         printf(" ");
    //     }
    //     for(int j = 2 * i - 1; j >= 1; j--){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // Question 19
    int n = 3;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 18; j++){
            if((j >= 2 - i && j <= 6 + i) || (j >= 12 - i && j <= 16 + i))
                printf("*");
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    for(int j = 0; j < 13; j++){
        if(j == 6)
            printf("%s", "MySirG");
        else
            printf("*");
    }
    printf("\n");
    n = 9;
    for(int i = n; i >= 1; i--){
        for(int k = n - i; k > 0; k--){
            printf(" ");
        }
        for(int j = 2 * i - 1; j >= 1; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}