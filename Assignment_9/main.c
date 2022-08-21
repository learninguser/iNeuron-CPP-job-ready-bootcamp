#include<stdio.h>
#include<stdlib.h> // exit() function is imported from this library
#include<math.h>

int main(){
    // Question 1
    // int month_number;
    // printf("Enter a month number: ");
    // scanf("%d", &month_number);

    // switch(month_number){
    //     case 1:
    //         printf("Month number %d has 31 days", month_number);
    //         break;
    //     case 2:
    //         printf("Month number %d has 28/29 days", month_number);
    //         break;
    //     case 3:
    //         printf("Month number %d has 31 days", month_number);
    //         break;
    //     case 4:
    //         printf("Month number %d has 30 days", month_number);
    //         break;
    //     case 5:
    //         printf("Month number %d has 31 days", month_number);
    //         break;
    //     case 6:
    //         printf("Month number %d has 30 days", month_number);
    //         break;
    //     case 7:
    //         printf("Month number %d has 31 days", month_number);
    //         break;
    //     case 8:
    //         printf("Month number %d has 31 days", month_number);
    //         break;
    //     case 9:
    //         printf("Month number %d has 30 days", month_number);
    //         break;
    //     case 10:
    //         printf("Month number %d has 31 days", month_number);
    //         break;
    //     case 11:
    //         printf("Month number %d has 30 days", month_number);
    //         break;
    //     case 12:
    //         printf("Month number %d has 31 days", month_number);
    //         break;
    //     default:
    //         printf("Please enter number between 1 and 12");
    //         break;
    // }

    // Question 2    
    // char choice;
    // fflush("stdin");
    // scanf("%c", &choice);
    
    // int choice, a, b;
    // while(1){
    //     printf("\n1. Addition");
    //     printf("\n2. Substraction");
    //     printf("\n3. Multiplication");
    //     printf("\n4. Division");
    //     printf("\n5. Exit");

    //     printf("\nEnter a choice: ");
    //     scanf("%d", &choice);

    //     switch(choice){
    //     case 1:
    //         printf("Enter two numbers: ");
    //         scanf("%d%d", &a, &b);
    //         printf("Sum is %d", a + b);
    //         break;
    //     case 2:
    //         printf("Enter two numbers: ");
    //         scanf("%d%d", &a, &b);
    //         printf("Difference is %d", a - b);
    //         break;
    //     case 3:
    //         printf("Enter two numbers: ");
    //         scanf("%d%d", &a, &b);
    //         printf("Product is %d", a * b);
    //         break;
    //     case 4:
    //         printf("Enter two numbers: ");
    //         scanf("%d%d", &a, &b);
    //         printf("Quotient is %d", a / b);
    //         printf("Reminder is %d", a % b);
    //         break;
    //     case 5:
    //         exit(0);
    //         break;
    //     default:
    //         printf("Invalid entry. Please choose from the menu above\n");
    //     }
    // }

    // Question 3
    // int day_number;
    // printf("Enter a day number of a week: ");
    // scanf("%d", &day_number);

    // switch(day_number){
    //     case 1:
    //         printf("%d is monday", day_number);
    //         break;
    //     case 2:
    //         printf("%d is tuesday", day_number);
    //         break;
    //     case 3:
    //         printf("%d is wednesday", day_number);
    //         break;
    //     case 4:
    //         printf("%d is thursday", day_number);
    //         break;
    //     case 5:
    //         printf("%d is friday", day_number);
    //         break;
    //     case 6:
    //         printf("%d is saturday", day_number);
    //         break;
    //     case 7:
    //         printf("%d is sunday", day_number);
    //         break;
    //     default:
    //         printf("Invalid choice.");
    // }

    // Question 4
    // int choice, a, b, c;
    // while(1){
    //     printf("\n1. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
    //     printf("\n2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
    //     printf("\n3. Check whether a given set of three numbers are equilateral triangle or not");
    //     printf("\n4. Exit");

    //     printf("\nEnter a choice: ");
    //     scanf("%d", &choice);

    //     switch(choice){
    //     case 1:
    //         printf("Enter three numbers: ");
    //         scanf("%d%d%d", &a, &b, &c);
    //         if((a == b) || (a == c) || (b == c))
    //             printf("Given 3 lengths belongs to an isosceles triangle");
    //         else
    //             printf("Given 3 lengths doesn't belong to an isosceles triangle");
    //         break;
    //     case 2:
    //         printf("Enter three numbers: ");
    //         scanf("%d%d%d", &a, &b, &c);
    //         if(a == sqrt(pow(b, 2) + pow(c, 2)) || b == sqrt(pow(a, 2) + pow(c, 2)) || c == sqrt(pow(a, 2) + pow(b, 2)))
    //             printf("Given 3 lengths belongs to a right angled triangle");
    //         else
    //             printf("Given 3 lengths doesn't belong to a right angled triangle");
    //         break;
    //     case 3:
    //         printf("Enter three numbers: ");
    //         scanf("%d%d%d", &a, &b, &c);
    //         if((a == b) && (a == c) && (b == c))
    //             printf("Given 3 lengths belongs to a equilateral triangle");
    //         else
    //             printf("Given 3 lengths doesn't belong to a equilateral triangle");
    //         break;
    //     case 4:
    //         exit(0);
    //         break;
    //     default:
    //         printf("Invalid choice");
    //     }
    // }

    // Question 5
    // int choice;
    // printf("Enter a number: ");
    // scanf("%d", &choice);
    // switch(choice){
    //     case 1:
    //         printf("Good\n");
    //         break;
    //     case 2:
    //         printf("Better\n");
    //         break;
    //     case 3:
    //         printf("Best\n");
    //         break;
    //     default:
    //         printf("Invalid\n");
    // }

    // Question 6
    // int year;
    // printf("Enter a year: ");
    // scanf("%d", &year);
    // switch(year % 100 == 0){
    //     case 1:
    //         switch(year % 400 == 0){
    //             case 1: printf("%d is a leap year", year); break;
    //             case 0: printf("%d is not a leap year", year); break;
    //         }
    //         break;
    //     case 0:
    //         switch(year % 4 == 0){
    //             case 1: printf("%d is a leap year", year); break;
    //             case 0: printf("%d is not a leap year", year); break;
    //         }
    //         break;
    // }

    // Question 7
    // int units; 
    // float total = 0, amount = 0;
    // printf("Enter no: of units consumed: ");
    // scanf("%d", &units);
    // switch(units <= 50){
    //     case 1: amount = units * 0.5; break;
    //     case 0: 
    //         switch(units <= 150){
    //             case 1: amount = 25 + (units - 50) * 0.75; break;
    //             case 0: 
    //                 switch(units <= 250){
    //                     case 1: amount = 25 + 75 + (units - 150) * 1.2; break;
    //                     case 0: amount = 25 + 75 + 120 + (units - 250) * 1.5; break;
    //                 }
    //                 break;
    //         }
    //         break;
    // }
    // total = amount + (0.2 * amount);
    // printf("Total amount: %f", total);

    // Question 8
    // int num;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // switch(num > 0){
    //     case 1:
    //         printf("%d", num);
    //         break;
    //     case 0:
    //         printf("%d", -num);
    //         break;
    // }

    // Question 9
    // int num;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // switch(num % 2){
    //     case 1:
    //         printf("%d", num);
    //         break;
    //     case 0:
    //         printf("%d", num + 1);
    //         break;
    // }

    // Question 10
    int a, b, c;
    printf("Enter co-efficients of quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);
    float d = b * b - (4 * a * c);
    float root1, root2;
    switch(d == 0){
        case 1:
            root1 = -b/(2 * a);
            root2 = -b/(2 * a);
            printf("root1 = %f, root2 = %f", root1, root2);
            break;
        case 0:
            switch(d > 0){
                case 1:
                    root1 = (-b + sqrt(pow(b, 2) - (4 * a * c)))/(2 * a);
                    root2 = (-b - sqrt(pow(b, 2) - (4 * a * c)))/(2 * a);
                    printf("root1 = %f, root2 = %f", root1, root2);
                    break;
                case 0:
                    double xr = - b / ( 2 * a );
                    double ximg1 = -sqrt(-d) / (2 * a);
                    double ximg2 = -ximg1;
                    printf("root1 = %f + %fi, root2 = %f - %fi", xr, ximg1, xr, ximg2);
                    break;
            }
            break;
    }
    
    return 0;
}