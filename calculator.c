#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What is the X: ");
    int y = get_int("What is the Y: ");

    {
        printf("Subraction: %i\n", x - y);
        printf("Addition: %i\n", x + y);
        printf("Multiplication: %i\n", x * y);
        printf("Division: %.6f\n", (float) x / (float) y);
        printf("Average: %f\n", ( x + y ) / 2.0);
    }
    printf("Thank You!!\n");
}
