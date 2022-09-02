#include<stdio.h>
// Question 1. Write a program to calculate the sum of two matrices each of order 3x3.
// int main(){
//     int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int ans[3][3];
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             ans[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d\t", ans[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Question 2. Write a program to calculate the product of two matrices each of order 3x3.
// int main(){
//     int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int ans[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
//     int sum = 0;
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             for(int k = 0; k < 3; k++){
//                 sum += arr1[i][k] * arr2[k][j];
//             }
//             ans[i][j] = sum;
//             sum = 0;
//         }
//     }
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d\t", ans[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Question 3: Write a program in C to find the transpose of a given matrix.
// int main(){
//     int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int arr2[3][3];
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             arr2[i][j] = arr1[j][i];
//         }
//     }
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d\t", arr2[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Question 4: Write a program in C to find the sum of right diagonals of a matrix
// int main(){
//     int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int sum = 0;
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             if (i == j)
//                 sum += arr1[i][j];
//         }
//     }
//     printf("Sum of right diagonals: %d", sum);
//     return 0;
// }

// Question 5: Write a program in C to find the sum of left diagonals of a matrix
// int main(){
//     int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int sum = 0, j = 2;
//     for(int i = 0; i < 3; i++){
//         sum += arr1[i][j];
//         j--;

//     }
//     printf("Sum of left diagonals: %d", sum);
//     return 0;
// }

// Question 6: Write a program in C to find the sum of rows and columns of a Matrix.
// int main(){
//     int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int sum = 0;
//     printf("Row Sum: ");
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             sum += arr1[i][j];
//         }
//         printf("%d ", sum);
//         sum = 0;
//     }
//     printf("\nColumn Sum: ");
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             sum += arr1[j][i];
//         }
//         printf("%d ", sum);
//         sum = 0;
//     }
//     return 0;
// }

// Question 7: Write a program in C to print or display the lower triangular of a given matrix.
// int main(){
//     int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             if(i < j){
//                 arr1[i][j] = 0;
//             }
//         }
//     }
    
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d ", arr1[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Question 8: Write a program in C to print or display the upper triangular of a given matrix.
// int main(){
//     int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             if(i > j){
//                 arr1[i][j] = 0;
//             }
//         }
//     }
    
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d ", arr1[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Question 9: Write a program in C to accept a matrix and determine whether it is a sparse matrix.
// int main(){
//     int m, n;
//     printf("Enter the values of m and n (separated by space): ");
//     scanf("%d %d", &m, &n);
//     int arr1[3][3], count = 0;
//     printf("Enter elements in the matrix: ");
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             scanf("%d", &arr1[i][j]);
//         }
//     }

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d ", arr1[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             if(arr1[i][j] == 0){
//                 count++;
//             }
//         }
//     }
//     if(count > (m * n)/2)
//         printf("Given matrix is a sparse matrix");
//     else
//         printf("Given matrix is a dense matrix");
//     return 0;
// }

// Question 10: Write a program in C to find the row with maximum number of 1s.
int main(){
    int arr1[3][3] = {{1, 0, 0}, {1, 0, 1}, {1, 1, 1}};
    int idx = 0, count = 0, max_count = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr1[i][j] == 1)
                count++;
        }
        if(count > max_count){
            max_count = count;
            idx = i;
        }
        count = 0;
    }

    printf("Max Count: %d\nRow: %d", max_count, idx);
    return 0;
}