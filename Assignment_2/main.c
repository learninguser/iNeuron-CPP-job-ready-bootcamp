#include<stdio.h>

int main(){
    // Question 1: Write a program to print unit digit of a given number
    int num = 2503;
    printf("Unit Digit of %d: %d ", num, num%10);
    printf("\n");

    // Question 2: Write a program to print a given number without its last digit.
    int num = 2503;
    printf("Number without its last digit %d: %d ", num, num%10);
    printf("\n");

    // Question 3: Write a program to swap values of two int variables
    int a = 5, b = 6;
    printf("Before swap a = %d, b = %d", a, b);
    printf("\n");
    int c = a;
    a = b;
    b = c;
    printf("After swap a = %d, b = %d", a, b);
    printf("\n");

    // Question 4: Write a program to swap values of two int variables without using a third variable.
    int d = 10, e = 15;
    printf("Before swap d = %d, e = %d", d, e);
    printf("\n");
    d = d + e;
    e = d - e;
    d = d - e;
    printf("After swap d = %d, e = %d", d, e);
    printf("\n");

    // Question 5: Write a program to input a three-digit number and display the sum of the digits.
    int num1;
    printf("Enter a 3 digit number: ");
    scanf("%d", &num1);
    int num2 = num1;
    int sum = 0;
    sum += num1 % 10;
    num1 /= 10;
    sum += num1 % 10;
    num1 /= 10;
    sum += num1 % 10;
    printf("Sum of the digits in %d is: %d", num2, sum);
    printf("\n");

    // Question 6: Write a program which takes a character as an input and displays its ASCII code.
    char c1;
    printf("Enter a character: ");
    scanf("%c", &c1);
    printf("ASCII code of %c is %d", c1, c1);
    printf("\n");

    // Question 7: Write a program to find the position of first 1 in LSB.
    int num = 12, count = 0;
    int result = 0;
    
    while(num != 0){
        result = num & 1;
        count++;
        if(result == 1){
            printf("%d", count);
            break;
        }
        num = num >> 1;
    }

    // Question 8: Write a program to check whether the given number is even or odd using a bitwise operator
    int num = 12;
    int result = num & 1;
    if(result){
        printf("%d is Odd", num);
    }else{
        printf("%d is even", num);
    }

    // Question 9: Write a program to print size of an int, a float, a char and a double type variable
    int int_var = 1;
    printf("Size of int: %d\n", sizeof(int_var));
    float float_var = 1.0f;
    printf("Size of float: %d\n", sizeof(float_var));
    char c = 'a';
    printf("Size of char: %d\n", sizeof(c));
    double double_var = 1.0;
    printf("Size of double: %d\n", sizeof(double_var));

    // Question 10: Write a program to make the last digit of a number stored in a variable as zero.
    // (Example - if x = 2345 then make it x = 2340)
    int x = 2345;
    if (x % 10 == 0){
        printf("%d", x);
    }else{
        x /= 10;
        printf("%d", x * 10);
    }

    // Question 11: Write a program to input a number from the user and also input a digit. 
    // Append a digit in the number and print the resulting number. 
    // (Example - number = 234 and digit=9 then the resulting number is 2349)
    int number, digit;
    printf("Enter a number and digit to append: ");
    scanf("%d, %d", &number, &digit);
    number = (number * 10) + digit;
    printf("The resulting number is %d", number);

    // Question 12: Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
    int inr_amount = 0;
    double usd_amount = 0;
    printf("Enter an amount in INR: ");
    scanf("%d", &inr_amount);
    usd_amount = inr_amount / 76.23;
    printf("%d INR = %.2f USD", inr_amount, usd_amount);

    // Question 13: Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
    int given_num, res;
    printf("Enter a 3 digit number: ");
    scanf("%d", &given_num);
    int rem = given_num % 10;
    given_num /= 10;
    res = rem * 100 + given_num;
    printf("Rotated number by 1 digit: %d", res);
    printf("\n");
    return 0;
}