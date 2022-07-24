#include<stdio.h>

int main(){
    // Question 1: Write a program to check whether a given number is positive or non-positive
    // int num = 10;
    // if(num > 0){
    //     printf("%d is positive", num);
    // }else{
    //     printf("%d is non-positive", num);
    // }
    
    // Question 2: Write a program to check whether a given number is divisible by 5 or not
    // int num = 10;
    // if(num % 5 == 0){
    //     printf("%d is divisible by 5", num);
    // }else{
    //     printf("%d is not divisible by 5", num);
    // }

    // Question 3: Write a program to check whether a given number is an even number or an odd number
    // int num = 10;
    // if(num % 2 == 0){
    //     printf("%d is an even number", num);
    // }else{
    //     printf("%d is an odd number", num);
    // }

    // Question 4: Write a program to check whether a given number is an even number or an odd number without using % operator.
    // int num = 15;
    // if(num & 1 == 1){
    //     printf("%d is an odd number", num);
    // }else{
    //     printf("%d is an even number", num);
    // }

    // Question 5: Write a program to check whether a given number is a three-digit number or not.
    // int num = 456;
    // if(num >= 100 && num <= 999){
    //     printf("%d is a three-digit number", num);
    // }else{
    //     printf("%d is not a three-digit number", num);
    // }

    // Question 6: Write a program to print greater between two numbers. Print one number of both are the same.
    // int num1 = 10, num2 = 10;
    // if (num1 > num2){
    //     printf("%d is greater than %d", num1, num2);
    // }else if (num1 < num2){
    //     printf("%d is greater than %d", num2, num1);
    // }else {
    //     printf("%d, Both are same", num1);
    // }
    
    // Question 7: Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
    // Coefficients of the quadratic equation
    // float a = 2, b = 3, c = 4;
    // float d = 0;

    // // Calculating Discriminant
    // d = (b * b) - (4 * a * c);
    // if(d == 0){
    //     printf("Given quadratic equation has real and equal roots", a, b, c);
    // }else if (d > 0){
    //     printf("Given quadratic equation has real and distinct roots", a, b, c);
    // }else{
    //     printf("Given quadratic equation has imaginary roots", a, b, c);
    // }
    
    // Question 8: Write a program to check whether a given year is a leap year or not.
    // int given_year = 2000; // 1700, 1800, 1900 : Not Leap years
    // if((given_year % 400 == 0) || (given_year % 100 != 0 && given_year % 4 == 0)){
    //     printf("%d is a Leap Year", given_year);
    // }else{
    //     printf("%d is not a Leap year", given_year);
    // }

    // Question 9: Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
    // int a = 20, b = 10, c = 20;
    // if((a >= b) && (a >= c)){
    //     printf("%d", a);
    // }else if((b > a) && (b > c)){
    //     printf("%d", b);
    // }else{
    //     printf("%d", c);
    // }

    // Question 10: Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
    // float cost_price, selling_price;
    // printf("Enter Cost price and Selling price: ");
    // scanf("%f %f", &cost_price, &selling_price);

    // float profit, loss;
    // if(selling_price >= cost_price){
    //     profit = ((selling_price - cost_price)/cost_price) * 100;
    //     printf("Profit: %.2f %%", profit);
    // }else{
    //     loss = ((cost_price - selling_price)/cost_price) * 100;
    //     printf("Loss: (-) %.2f %%", loss);
    // }

    // Question 11: Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. 
    // Now display whether the candidate passed the examination or failed.
    
    // Test case 1: 25 100 75 85 65 
    // Expected output: Candidate failed the exam

    // Test case 2: 100 58 65 75 53
    // Expected output: Candidate Passed the exam

    // int sub1, sub2, sub3, sub4, sub5;
    // printf("Enter marks of all the 5 subjects: ");
    // scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    // if ((sub1 >= 33) && (sub2 >= 33) && (sub3 >= 33) && (sub4 >= 33) && (sub5 >= 33)){
    //     printf("Candidate Passed the exam");
    // }else{
    //     printf("Candidate failed the exam");
    // }

    // Question 12: Write a program to check whether a given alphabet is in uppercase or lowercase.
    // char c = 'A';
    // if(c > 96 && c < 123){
    //     printf("%c is a lower case alphabet", c);
    // }else if(c > 64 && c < 91){
    //     printf("%c is a upper case alphabet", c);
    // }

    // Question 13: Write a program to check whether a given number is divisible by 3 and divisible by 2.
    // int num = 18;
    // if(num % 2 == 0 && num % 3 == 0){
    //     printf("%d is divisible by 3 and 2", num);
    // }else{
    //     printf("%d is not divisible by 3 and 2", num);
    // }

    // Question 14: Write a program to check whether a given number is divisible by 7 or divisible by 3.
    // int num = 18;
    // if(num % 3 == 0 || num % 7 == 0){
    //     printf("%d is divisible by 3 or 7", num);
    // }else{
    //     printf("%d is not divisible by 3 or 7", num);
    // }

    // Question 15: Write a program to check whether a given number is positive, negative or zero.
    // int num = 10;
    // if(num > 0){
    //     printf("Given number is positive");
    // }else if(num < 0){
    //     printf("Given number is negative");
    // }else{
    //     printf("Given number is zero");
    // }

    // Question 16: Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
    // char c = '0';
    // if(c > 96 && c < 123){
    //     printf("%c is a lower case alphabet", c);
    // }else if(c > 64 && c < 91){
    //     printf("%c is a upper case alphabet", c);
    // }else if(c > 47 && c < 58){
    //     printf("%c is a digit", c);
    // }else{
    //     printf("%c is a special character", c);
    // }

    // Question 17: Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
    // int side1 = 12, side2 = 11, side3 = 17;
    // if(((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2)){
    //     printf("The triangle with the given side lengths is valid");
    // }else{
    //     printf("The triangle with the given side lengths is not valid");
    // }

    // Question 18: Write a program which takes the month number as an input and display number of days in that month
    // int month;
    // printf("Please Enter Month Number: ");
    // scanf("%d", &month);

    // if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
    //     printf("%d has 31 Days in a Month", month);
    // }else if(month == 2){
    //     printf("%d has 28 Days or 29 Days in a Month", month);
    // }else{
    //     printf("%d has is 30 Days in a Month", month);
    // }
    // return 0;
}