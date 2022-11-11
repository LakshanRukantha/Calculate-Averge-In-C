#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare the variables

    int num1, num2;
    float avg;

    //Getting the inputs

    printf("# Enter your first number: ");
    scanf("%d", &num1);
    printf("# Enter your second number: ");
    scanf("%d", &num2);

    //Calculate the average

    avg = (float)(num1+num2)/2;

    //Outputting the average of two numbers

    printf("\n# The average is: %.2f\n", avg);
    return 0;
}
