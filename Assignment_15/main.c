#include <stdio.h>
// Question 1: Write a function to find the greatest number from the given array of any size. (TSRN)
// void find_greatest(int arr[], int n);
// int main(){
//     int n;
//     printf("Enter a value of n: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d numbers: ", n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     find_greatest(arr, n);
//     return 0;
// }

// void find_greatest(int arr[], int n){
//     int ans = -2^31 - 1;
//     for(int i = 0; i < n; i++){
//         if(arr[i] >= ans){
//             ans = arr[i];
//         }
//     }
//     printf("Max value of the numbers entered: %d", ans);
// }

// Question 2: Write a function to find the smallest number from the given array of any size. (TSRN)
// void find_smallest(int arr[], int n);
// int main(){
//     int n;
//     printf("Enter a value of n: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d numbers: ", n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     find_smallest(arr, n);
//     return 0;
// }

// void find_smallest(int arr[], int n){
//     int ans = 2^31 - 1;
//     for(int i = 0; i < n; i++){
//         if(arr[i] <= ans){
//             ans = arr[i];
//         }
//     }
//     printf("Smallest value of the numbers entered: %d", ans);
// }

// Question 3: Write a function to sort an array of any size. (TSRN)
// void sort(int arr[], int n);
// void print_array(int arr[], int n);
// int main(){
//     int n;
//     printf("Enter a value of n: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d numbers: ", n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     sort(arr, n);
//     print_array(arr, n);
//     return 0;
// }

// void sort(int arr[], int n){
//     int temp;
//     for(int i = 0; i <= n - 2; i++){
//         for(int j = i + 1; j <= n - 1; j++){
//             if(arr[i] > arr[j]){
//                 temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
// }

// void print_array(int arr[], int n){
//     for(int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }

// Question 4: Write a function to rotate an array by 'n' position in 'd' direction. 
// The d is an indicative value for left or right. 
// For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, 
// then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29]

// void rotate_array_left(int arr[], int size, int n);
// void rotate_array_right(int arr[], int size, int n);
// void print_array(int arr[], int size);
// int main(){
//     int size, n, direction;
//     printf("Enter array size: ");
//     scanf("%d", &size);
//     printf("Enter %d numbers: ", size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter how many times you want to rotate the array: ");
//     scanf("%d", &n);
//     printf("Enter the direction in which you want to rotate the array: \n1. Left \n2. Right\n");
//     scanf("%d", &direction);
//     switch(direction){
//         case 1:
//             rotate_array_left(arr, size, n);
//             break;
//         case 2:
//             rotate_array_right(arr, size, n);
//     }
//     print_array(arr, size);
//     return 0;
// }

// void rotate_array_left(int arr[], int size, int n){
//     for(int j = 0; j < n; j++){
//         int temp = arr[0];
//         for(int i = 0; i < size - 1; i++){
//             arr[i] = arr[i + 1];
//         }
//         arr[size - 1] = temp;
//     }
// }

// void rotate_array_right(int arr[], int size, int n){
//     for(int j = 0; j < n; j++){
//         int temp = arr[size - 1];
//         for(int i = size - 1; i > 0; i--){
//             arr[i] = arr[i - 1];
//         }
//         arr[0] = temp;
//     }
// }

// void print_array(int arr[], int size){
//     for(int i = 0; i < size; i++)
//         printf("%d ", arr[i]);
// }

// Question 5: Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
// int get_duplicate(int arr[], int n);
// int main(){
//     int arr[7] = {32, 29, 40, 40, 12, 12, 70};
//     int ans = get_duplicate(arr, 7);
//     if(ans != -1){
//         printf("First occurence of adjacent duplicate element value: %d", ans);
//     }else{
//         printf("No adjacent duplicates in the array");
//     }
//     return 0;
// }

// int get_duplicate(int arr[], int n){
//     for(int i = 0; i < n - 1; i++){
//         if(arr[i] == arr[i + 1]){
//             return arr[i];
//         }
//     }
//     return -1;
// }

// Question 6: Write a function in C to read n number of values in an array and display it in reverse order.
// void reverse_array(int arr[], int n);
// void print_array(int arr[], int n);
// int main(){
//     int n;
//     printf("Enter a value of n: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d numbers: ", n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     reverse_array(arr, n);
//     printf("Reversed array: ");
//     print_array(arr, n);
//     return 0;
// }
// void reverse_array(int arr[], int n){
//     int mid_ele = (n + 1)/2, temp;
//     for(int i = 0; i < mid_ele; i++){
//         temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
// }
// void print_array(int arr[], int n){
//     for(int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }

// Question 7: Write a function in C to count a total number of duplicate elements in an array.
// int get_duplicate_elements_count(int arr[], int n);
// int main(){
//     int n;
//     printf("Enter a value of n: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d numbers: ", n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int ans = get_duplicate_elements_count(arr, n);
//     printf("No: of duplicate elements in the array: %d", ans);
//     return 0;
// }

// int get_duplicate_elements_count(int arr[], int n){
//     int count = 0;
//     for(int i = 0; i < n - 1; i++){
//         for(int j = i + 1; j <= n - 1; j++){
//             if(arr[i] == arr[j]){
//                 count += 1;
//             }
//         }
//     }
//     return count;
// }

// Question 8. Write a function in C to print all unique elements in an array.
// void print_unique_elements(int arr[], int n);
// int main(){
//     int n;
//     printf("Enter a value of n: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d numbers: ", n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     print_unique_elements(arr, n);
//     return 0;
// }

// void print_unique_elements(int arr[], int n){
//     for(int i = 0; i < n - 1; i++){
//         int count = 0;
//         for(int j = i + 1; j <= n - 1; j++){
//             if(arr[i] == arr[j]){
//                 count += 1;
//                 break;
//             }
//         }
//         if(count == 0){
//             printf("%d ", arr[i]);
//         }
//     }
// }

// Question 9: Write a function in C to merge two arrays of the same size sorted in descending order.
// void merge(int arr1[], int arr2[], int merged[], int n);
// void print_array(int arr[], int n);
// int main(){
//     int n;
//     printf("Enter a value of n: ");
//     scanf("%d", &n);
//     int arr1[n], arr2[n], merged[2 * n];
//     printf("Enter %d numbers for the first array in sorted order: ", n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr1[i]);
//     }
//     printf("Enter %d numbers for the second array in sorted order: ", n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr2[i]);
//     }
//     merge(arr1, arr2, merged, n);
//     print_array(merged, 2 * n);
//     return 0;
// }

// void merge(int arr1[], int arr2[], int merged[], int n){
//     int i = 0, j = 0;
//     for(int k = 0; k < 2 * n; k++){
//         if(i >= n){
//             while(k < 2 * n){
//                 merged[k] = arr2[j];
//                 k++;
//                 j++;
//                 if(k == 2 * n)
//                     break;
//             }
//         }
        
//         if(j >= n){
//             while(k < 2 * n){
//                 merged[k] = arr1[i];
//                 k++;
//                 i++;
//                 if(k == 2 * n)
//                     break;
//             }
//         }

//         else if(arr1[i] > arr2[j]){
//             merged[k] = arr1[i];
//             i++;
//         }else{
//             merged[k] = arr2[j];
//             j++;
//         }
//     }
// }

// void print_array(int arr[], int n){
//     for(int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }

// Question 10: Write a function in C to count the frequency of each element of an array.
// int find_greatest(int arr[], int n);
// void ele_frequency(int arr1[], int n, int frequency_arr[], int largest);
// void print_array(int arr[], int n);
// int main(){
//     int n;
//     printf("Enter a value of n: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d numbers: ", n);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int largest = find_greatest(arr, n);
//     largest++;
//     int frequency_arr[largest];
//     ele_frequency(arr, n, frequency_arr, largest);
//     printf("\n");
//     print_array(frequency_arr, largest);
//     return 0;
// }

// int find_greatest(int arr[], int n){
//     int ans = -2^31 - 1;
//     for(int i = 0; i < n; i++){
//         if(arr[i] >= ans){
//             ans = arr[i];
//         }
//     }
//     return ans;
// }

// void ele_frequency(int arr[], int n, int frequency_arr[], int largest){
//     for(int i = 0; i < largest; i++)
//         frequency_arr[i] = 0;

//     for(int j = 0; j < n; j++){
//         int curr_num = arr[j];
//         printf("\nCurrent num: %d", curr_num);
//         if (frequency_arr[curr_num] == 0)
//             frequency_arr[curr_num] = 1;
//         else
//             frequency_arr[curr_num] += 1;
//     }
// }

// void print_array(int arr[], int n){
//     for(int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
// }