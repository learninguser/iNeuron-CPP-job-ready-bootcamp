#include<stdio.h>

// Question 1: Write a function to calculate length of the string
// int str_len(char str[]);
// int main(){
//     char str[10] = "hello";
//     int i = str_len(str);
//     printf("The length of the string: %d", i);
//     return 0;
// }

// int str_len(char str[]){
//     int i;
//     for(i=0; str[i]; i++);
//     return i;
// }

// Question 2: Write a function to reverse a string.
// void str_rev(char str[]);
// int main(){
//     char str[10] = "hello";
//     str_rev(str);
//     return 0;
// }

// void str_rev(char str[]){
//     char ans[10];
//     int i, len;
//     for(len = 0; str[len]; len++);
//     for(i = 0; str[i]; i++){
//         ans[len - i - 1] = str[i];
//     }
//     ans[len] = '\0';
//     printf("%s", ans);
// }

// Question 3: Write a function to compare two strings.
// int str_cmp(char str1[], char str2[]);
// int main(){
//     char str1[10] = "acd", str2[10] = "abc";
//     int ans = str_cmp(str1, str2);
//     if(ans == 1){
//         printf("%s and %s are in opposite of dictonary order", str1, str2);
//     }else if(ans == 0){
//         printf("Both the strings are equal");
//     }else{
//         printf("%s and %s are in dictonary order", str1, str2);
//     }
//     return 0;
// }

// int str_cmp(char str1[], char str2[]){
//     int len, len1, len2;
//     for(len1 = 0; str1[len1]; len1++);
//     for(len2 = 0; str2[len2]; len2++);
    
//     if(len1 > len2){
//         len = len2;
//     }else{
//         len = len1;
//     }

//     for(int i = 0; i < len; i++){
//         if(str1[i] > str2[i]){
//             return 1;
//         }else if(str1[i] < str2[i]){
//             return -1;
//         }
//     }
//     return 0;
// }

// Question 4: Write a function to transform string into uppercase
// void str_upper(char str[]);
// int main(){
//     char str[10] = "hello";
//     str_upper(str);
//     return 0;
// }

// void str_upper(char str[]){
//     int i;
//     for(i = 0; str[i]; i++){
//         if(str[i] >= 'a' && str[i] <= 'z'){
//             str[i] = str[i] - 32;
//         }
//     }
//     printf("%s", str);
// }

// Question 5: Write a function to transform string into lowercase
// void str_upper(char str[]);
// int main(){
//     char str[10] = "Hello";
//     str_upper(str);
//     return 0;
// }

// void str_upper(char str[]){
//     int i;
//     for(i = 0; str[i]; i++){
//         if(str[i] >= 'A' && str[i] <= 'Z'){
//             str[i] = str[i] + 32;
//         }
//     }
//     printf("%s", str);
// }

// Question 6: Write a function to check whether a given string is an alphanumeric string or not. 
// (Alphanumeric string must contain at least one alphabet and one digit)
// E.g. 
// hello123@ is not an alphanumeric string
// hello123 is an alphanumeric string
// int check_alphanumeric(char str[]);
// int main(){
//     char str[10] = "Hello123@";
//     int ans = check_alphanumeric(str);
//     if(ans)
//         printf("%s is an alphanumeric string", str);
//     else
//         printf("%s is not an alphanumeric string", str);
//     return 0;
// }

// int check_alphanumeric(char str[]){
//     int alpha_numeric[] = {0, 0};
//     int i;
//     for(i = 0; str[i]; i++){
//         if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
//             alpha_numeric[0] += 1;
//         else if ((str[i] >= '0' && str[i] <= '9')){
//             alpha_numeric[1] += 1;
//         }else{
//             return 0;
//         }
//     }
//     return 1;
// }

// Question 7. Write a function to check whether a given string is palindrome or not.
// int check_palindrome(char str[]);
// int main(){
//     char str[10] = "redivider";
//     int ans = check_palindrome(str);
//     if(ans){
//         printf("%s is palindrome", str);
//     }else{
//         printf("%s is not a palindrome", str);
//     }
//     return 0;
// }

// int check_palindrome(char str[]){
//     int i=0, len;
//     for(len = 0; str[len]; len++);
//     int j = len - 1;
//     for(i = 0; i < len; i++){
//         if(i > j){
//             return 1;
//         }
//         if(str[i] == str[j]){
//             j--;
//         }else{
//             return 0;
//         }
//     }
// }

// Question 8: Write a function to count words in a given string
// int word_count(char str[]);
// int main(){
//     char str[] = "iNeuron CPP job ready bootcamp";
//     int ans = word_count(str);
//     printf("No: of words in the given string '%s' is %d", str, ans);
//     return 0;
// }
// int word_count(char str[]){
//     int space_count = 0;
//     for(int i = 0; str[i]; i++){
//         if(str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
//             space_count++;
//     }
//     return space_count + 1;
// }

// Question 9: Write a function to reverse a string word wise. 
// For example if the given string is "Mysirg Education Services" then the resulting string should be "Services Education Mysirg"
// void str_rev(char str[], int, int);
// void str_rev_word_wise(char str[]);
// int main(){
//     char str[100] = "Mysirg Education Services";
//     str_rev_word_wise(str);
//     printf("%s", str);
//     return 0;
// }

// void str_rev(char str[], int i, int j){
//     char temp;
//     while(i <= j){
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//         i++;
//         j--;
//     }
// }

// void str_rev_word_wise(char str[]){
//     int i = 0, start = 0, end = 0, flag = 0;
//     while(str[i] != '\0'){
//         if(str[i] == ' ' || str[i + 1] == '\0'){
//             if(str[i + 1] == '\0')
//                 end = i + 1;
//             else
//                 end = i;
//             str_rev(str, start, end - 1);
//             start = i + 1;
//         }
//         i++;
//     }
//     str_rev(str, 0, end - 1);
// }

// Question 10: Write a function to find the repeated character in a given string.
void freq_char(char str[]);
int main(){
    char str[20] = "HelloAbBczz";
    freq_char(str);
    return 0;
}
void freq_char(char str[]){
    int ans[123] = {0};
    for(int i=0; str[i]; i++){
        ans[str[i]]++;
    }

    for(int i=0; i < 123; i++){
        if(ans[i] > 0)
            printf("%c -> %d\n", i, ans[i]);
    }
}