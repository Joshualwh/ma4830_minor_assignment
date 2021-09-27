#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

struct Shape{
    char shape_input[20];
    float circumference;
    float area;
    float surface_area;
    float volume;
    bool two_dimension;
    float length;
    float height;
    float width;
    float radius;
    };

void square(struct Shape *shape){
    /* 2D Square */
    printf("Please Enter any integer Value(m) : ");
    scanf("%f", &shape->length);
    strcpy(shape->shape_input, "square");
    shape->area = length**2;
    shape->circumference = 4*a;
    shape->two_dimension = true;
}

// void square(struct Shape *shape){
//   /* 2D Square */
    
//   printf("Length = %lf m \n", *length);

//   area = (*length)*(*length);
//   perimeter = 4*(*length);

//   printf("Area = %lf m \n", area);
//   printf("Perimeter = %lf m \n", perimeter);
//   printf("\n");

// }

// void rectangle(double* short_side, double* long_side){
//   /* 2D Rectangle */
//   double area, perimeter;

//   printf("Short side = %lf m \n", *short_side);
//   printf("Long side = %lf m \n", *long_side);

//   area = (*short_side)*(*long_side);
//   perimeter = 2*(*short_side) + 2*(*long_side);

//   printf("Area = %lf m \n", area);
//   printf("Perimeter = %lf m \n", perimeter);
//   printf("\n");

// }

// void circle(double* radius){
//   /* 2D Circle */
//   double area, perimeter;

//   printf("Radius = %lf m \n", *radius);

//   area = M_PI * pow((*radius), 2);
//   perimeter = 2 * M_PI * (*radius);

//   printf("Area = %lf m \n", area);
//   printf("Perimeter = %lf m \n", perimeter);
//   printf("\n");

// }



void output(struct Shape *shape){
    if (shape->two_dimension){
        printf("Types of 2D object: %s \n", shape->shape_input);
        printf("Area: %f m^2 \n", shape->area);
        printf("Circumference: %f m \n", shape->circumference);
    }
    else{
        printf("Types of 3D object: %s \n", shape->shape_input);
        printf("Circumference: %f m \n", shape->circumference);
        printf("Surface area: %f m^2 \n", shape->surface_area);
        printf("Volume: %f m^3 \n", shape->volume);
    }
}

int main () {
    struct Shape shape;
    printf("ahah \n");
    square(&shape);
    output(&shape);
}
