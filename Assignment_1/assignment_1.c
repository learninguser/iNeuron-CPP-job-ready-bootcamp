#include <stdio.h>

int main()
{
    // Question 1: Write a program to print Hello Students on the screen.
    // printf("Hello Students\n");

    // Question 2: Write a program to print Hello in the first line and Students in the second line.
    // printf("Hello\nStudents\n");

    // Question 3: Write a program to print "MySirG" on the screen. (Remember to print in double quotes)
    // printf("\"MySirG\"");

    /* Question 4:
        WAP to find the area of the circle. Take radius of circle from user as input and print the
        result in below given format.
        Expected output format – “Area of circle is A having the radius R”. Replace A with area
        & R with radius.
    */
    float r, a;
    printf("Enter the radius of a circle: ");
    scanf("%f", &r);
    a = 3.14 * r * r;
    printf("Area of a circle is %f having the radius %f", a, r);
   
    /* Question 5:
        WAP to calculate the length of String using printf function.
    */
    int x = printf("ineuron");
    printf("%d", x);

    /* Question 6:
        WAP to print the name of the user in double quotes.
        Expected output format – "Hello , Amit Kumar"
    */
    // printf("\"Hello , Pavan Kumar\"");

    /* Question 7:
        WAP to print "%d" on the screen.
    */
    // printf("%%d");

    /* Question 8:
        WAP to print "\n" on the screen.
    */
    // printf("\\n");

    /* Question 9:
        WAP to print "\\" on the screen.
    */
    // printf("\\\\");

    /* Question 10: 
        WAP to take date as an input in below given format and convert the date format and display the result as given below.
        User Input date format – “DD/MM/YYYY” (27/11/2022)
        Output format – “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
    */
    int d, m, y;
    printf("Enter Date: ");
    scanf("%d/%d/%d", &d, &m, &y);
    printf("Date - %d, Month - %d, Year - %d", d, m, y);
    
    /* Question 11:
        WAP to take time as an input in below given format and convert the time format and display the result as given below.
        User Input date format – "HH:MM"
        Output format – "HH hour and MM Minute"
        Example –
        "11:25" converted to "11 Hour and 25 Minute"
    */
    int h, m;
    printf("Enter time in HH:MM format: ");
    scanf("%d:%d", &h, &m);
    printf("%d Hour and %d Minute", h, m);
    return 0;
}