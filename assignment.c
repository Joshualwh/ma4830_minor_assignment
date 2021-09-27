#include <stdio.h>

int main () {
    /* Let's do one first: 2D Square */
    int a, area, square_perimeter;

    printf("Please Enter any integer Value : ");
    scanf("%d", &a);

    area = a*a;
    square_perimeter = 4*a;

    printf("%d \n", area);
    printf("%d \n", square_perimeter);
    }
