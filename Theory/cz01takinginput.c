// C program to show input and output
#include <stdio.h>

int main()
{

    // Declare the variables
    int num;
    char ch;
    float f;
    double db; // 64 bit data type 8byte size

    // --- Integer ---

    printf("Enter the integer: ");
    scanf("%d", &num);
    printf("\nEntered integer is: %d", num);

    // --- Float ---

    printf("\n\nEnter the float: ");
    scanf("%f", &f);
    printf("\nEntered float is: %f", f);

    // --- Character ---

    printf("\n\nEnter the Character: ");
    scanf("%c", &ch);
    printf("\nEntered integer is: %c", ch);
    
    // --- Double ---

    printf("enter the double number to take input \n");
    scanf("%lf",&db);
    printf("Entered double is: %lf\n",&db);
    
    return 0;
}