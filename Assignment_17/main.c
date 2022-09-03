#include<stdio.h>

// Question 1: Write a program to calculate the length of the string. (without using built-in method)
// int main(){
//     char str[10] = "hello";
//     int i;
//     for(i=0; str[i]; i++);
//     printf("The length of the string: %d", i);
//     return 0;
// }

// Question 2: Write a program to count the occurrence of a given character in a given string.
// int main(){
//     char str[10] = "hello";
//     char c = 'l';
//     int i, count = 0;
//     for(i = 0; str[i]; i++){
//         if (str[i] == c)
//             count++;
//     }
//     printf("count of %c in %s is: %d", c, str, count);
//     return 0;
// }

// Question 3: Write a program to count vowels in a given string
// int main(){
//     char str[10] = "hello";
//     char c = 'l';
//     int i, count = 0;
//     for(i = 0; str[i]; i++){
//         if((str[i] == 'a') ||(str[i] == 'e')||(str[i] == 'i')||(str[i] == 'o')||(str[i] == 'u')||(str[i] == 'A') ||(str[i] == 'E')||(str[i] == 'I')||(str[i] == 'O')||(str[i] == 'U'))
//             count++;
//     }
//     printf("Vowels Count: %d", count);
//     return 0;
// }

// Question 4: Write a program to convert a given string into uppercase
// int main(){
//     char str[10] = "Hello";
//     int i;
//     for(i = 0; str[i]; i++){
//         if(!(str[i] > 64 && str[i] < 91)){
//             str[i] = str[i] - 32;
//         }
//     }
//     printf("%s", str);
//     return 0;
// }

// Question 5: Write a program to convert a given string into lowercase
// int main(){
//     char str[10] = "Hello";
//     int i;
//     for(i = 0; str[i]; i++){
//         if(str[i] > 64 && str[i] < 91){
//             str[i] = str[i] + 32;
//         }
//     }
//     printf("%s", str);
//     return 0;
// }

// Question 6: Write a program to reverse a string.
// int main(){
//     char str[10] = "hello", ans[10];
//     int i, len;
//     for(len = 0; str[len]; len++);
//     for(i = 0; str[i]; i++){
//         ans[len - i - 1] = str[i];
//     }
//     ans[len] = '\0';
//     printf("%s", ans);
//     return 0;
// }

// Question 7: Write a program in C to count the total number of alphabets, digits and special characters in a string.
// int main(){
//     char str[20] = "hello123@#";
//     int ans[3] = {0};
//     for(int i = 0; str[i]; i++){
//         if((str[i] > 47 && str[i] < 58))
//             ans[0]++;
//         else if((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
//             ans[1]++;
//         else
//             ans[2]++;
//     }
//     printf("Total number of digits in %s are %d", str, ans[0]);
//     printf("\nTotal number of alphabets in %s are %d", str, ans[1]);
//     printf("\nTotal number of special characters in %s are %d", str, ans[2]);
//     return 0;
// }

// Question 8: Write a program in C to copy one string to another string.
// int main(){
//     char str[10] = "hello", ans[10];
//     int i, len;
//     for(len = 0; str[len]; len++);
//     for(i = 0; str[i]; i++){
//         ans[i] = str[i];
//     }
//     ans[len] = '\0';
//     printf("%s", ans);
//     return 0;
// }

// Question 9: Write a C program to sort a string array in ascending order.
// int main(){
//     char str[10] = "haib";
//     char temp = ' ';
//     int i;
//     for(i = 0; i < 4; i++){
//         for(int j = i + 1; j < 4; j++){
//             if (str[i] > str[j]){
//                 temp = str[i];
//                 str[i] = str[j];
//                 str[j] = temp;
//             }
//         }
//     }
//     printf("%s", str);
//     return 0;
// }

// Question 10: Write a program in C to Find the Frequency of Characters.
int main(){
    char str[10] = "hello";
    char freq[150] = {0};
    int i;
    for(i = 0; str[i]; i++){
        if (str[i] < 122){
            freq[str[i]]++;
        }
    }
    for(i = 0; i < 122; i++){
        if(freq[i] > 0){
            printf("%c -> %d\n", i, freq[i]);
        }
    }
    return 0;
}