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
    };


void square(struct Shape *shape){
    /* 2D Square */
    printf("Please Enter any integer Value(m) : ");
    float a;
    scanf("%f", &a);
    strcpy(shape->shape_input, "square");
    shape->area = a*a;
    shape->circumference = 4*a;
    shape->two_dimension = true;
}

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
