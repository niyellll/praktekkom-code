#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(int a, int b, int c);

bool valid_triangle(int a, int b, int c)
{
    // Check for positive sides
    if ( a <= 0 || b <= 0 || c <= 0 )
    {
        printf("Invalid triangle\nSide's length must be positive\n");
        return false;
    }
    // Check that a + b is greater than the third side
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        printf("Invalid triangle\nThe sum of any two sides must be greater than the length of the third side\n");
        return false;
    };
    // IF we passed both tests, we're good!
    printf("Valid triangle\n");
    return true;
}

int main(void)
{
    float a, b, c;

    // Get user input
    printf("Input the length of three sides of a triangle:\n");
    printf ("enter length of side A : "); scanf("%f", &a);
    printf ("enter length of side B : "); scanf("%f", &b);
    printf ("enter length of side C : "); scanf("%f", &c);

    // Check if triangle is valid
    valid_triangle(a, b, c);

    return 0;
}