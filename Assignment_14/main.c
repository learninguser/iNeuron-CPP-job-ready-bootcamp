#include<stdio.h>
// Question 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
// int main(){
//     int arr[10], ans = 0;
//     printf("Enter 10 numbers: ");
//     for(int i = 0; i < 10; i++){
//         scanf("%d", &arr[i]);
//         ans += arr[i];
//     }
//     printf("Sum of the numbers: %d", ans);
//     return 0;
// }

// Question 2: Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
// int main(){
//     int arr[10];
//     float ans = 0.0;
//     printf("Enter 10 numbers: ");
//     for(int i = 0; i < 10; i++){
//         scanf("%d", &arr[i]);
//         ans += arr[i];
//     }
//     printf("Average of the numbers: %f", ans/10.0);
//     return 0;
// }

// Question 3: Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. 
// Take array values from the user.
// int main(){
//     int a[10], sumOdd = 0, sumEven = 0;
//     printf("Enter a numbers: ");
//     for(int i = 0; i < 10; i++){
//         scanf("%d", &a[i]);
//     }
//     for(int i = 0; i < 10; i++){
//         if(a[i] % 2){
//             sumOdd += a[i];
//         }else{
//             sumEven += a[i];
//         }
//     }
//     printf("Sum of all Even numbers is %d\n", sumEven);
//     printf("Sum of all Odd numbers is %d", sumOdd);
//     return 0;
// }

// Question 4: Write a program to find the greatest number stored in an array of size 10. 
// Take array values from the user.
// int main(){
//     int arr[10];
//     int ans = -2^31 - 1;
//     printf("Enter 10 numbers: ");
//     for(int i = 0; i < 10; i++){
//         scanf("%d", &arr[i]);
//         if(arr[i] >= ans){
//             ans = arr[i];
//         }
//     }
//     printf("Max value of the numbers entered: %d", ans);
//     return 0;
// }

// Question 5: Write a program to find the smallest number stored in an array of size 10. 
// int main(){
//     int arr[10];
//     int ans = 2^31 - 1;
//     printf("Enter 10 numbers: ");
//     for(int i = 0; i < 10; i++){
//         scanf("%d", &arr[i]);
//         if(arr[i] <= ans){
//             ans = arr[i];
//         }
//     }
//     printf("Smallest value of the numbers entered: %d", ans);
//     return 0;
// }

// Question 6: Write a program to sort elements of an array of size 10. 
// Take array values from the user.
// int main(){
//     int arr[10], temp;
//     printf("Enter 10 numbers: ");
//     for(int i = 0; i < 10; i++){
//         scanf("%d", &arr[i]);
//     }
//     for(int i = 0; i < 9; i++){
//         for(int j = i + 1; j <= 9; j++){
//             if(arr[i] > arr[j]){
//                 temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     for(int i = 0; i < 10; i++)
//         printf("%d ", arr[i]);
//     return 0;
// }

// Question 7: Write a program to find second largest in an array. Take array values from the user.
// int main(){
//     int arr[10], largest, second_largest, temp;
//     printf("Enter 10 numbers: ");
//     for(int i = 0; i < 10; i++){
//         scanf("%d", &arr[i]);
//     }
//     largest = arr[0];
//     for(int i = 1; i <= 9; i++){
//         if(arr[i] > largest){
//             temp = largest;
//             largest = arr[i];
//             second_largest = temp;
//         }else if((arr[i] > second_largest) && (arr[i] != largest)){
//             second_largest = arr[i];
//         }
//     }
//     printf("First Largest number in the array: %d", largest);
//     printf("\nSecond Largest number in the array: %d", second_largest);
//     return 0;
// }

// Question 8: Write a program to find second smallest in an array. Take array values from the user.
// int main(){
//     int arr[10], smallest, second_smallest, temp;
//     printf("Enter 10 numbers: ");
//     for(int i = 0; i < 10; i++){
//         scanf("%d", &arr[i]);
//     }
//     smallest = arr[0];
//     for(int i = 1; i <= 9; i++){
//         if(arr[i] < smallest){
//             temp = smallest;
//             smallest = arr[i];
//             second_smallest = temp;
//         }else if((arr[i] < second_smallest) && (arr[i] != smallest)){
//             second_smallest = arr[i];
//         }
//     }
//     printf("First smallest number in the array: %d", smallest);
//     printf("\nSecond smallest number in the array: %d", second_smallest);
//     return 0;
// }

// Question 9: Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
// int main(){
//     int n;
//     printf("Enter a value of n: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d numbers: ", n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     for(int i = n - 1; i >= 0; i--){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// Question 10: Write a program in C to copy the elements of one array into another array. Take array
// values from the user.
int main(){
    int n;
    printf("Enter a value of n: ");
    scanf("%d", &n);
    int arr[n], ans[n];
    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        ans[i] = arr[i];
    }

    for(int i = 0; i < 10; i++)
        printf("%d ", ans[i]);
    return 0;
}