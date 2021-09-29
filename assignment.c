#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

struct Shape{
    char shape_input[100];
    float circumference;
    float area;
    float surface_area;
    float volume;
    float length;
    float length2;
    float length3;
    float height;
    float width;
    float radius;
    bool two_dimension;
    };

/* 2D Square */
void square(struct Shape *shape){

    // Ask for input parameters
    while (shape->length <= 0){
        printf("Enter length of square(m):");
        scanf("%f", &shape->length);

        if (shape->length <= 0) {printf("Error: Only positive number input! Please input again. \n"); 
            char c;
            while((c = getchar()) != '\n' &&  c != EOF){};     //Clear input buffer
        }
    }

    //Calculate area and circumference
    shape->area = shape->length * shape->length;
    shape->circumference = 4.0 * shape->length;
    shape->two_dimension = true;
}

/* 2D Rectangle */
void rectangle(struct Shape *shape){

    // Ask for input parameters
    while (shape->length <= 0){
        printf("Enter length of rectange(m):");
        scanf("%f", &shape->length);
        if (shape->length <= 0) {
            printf("Error: Only positive number input! Please input again. \n");
            char c;
            while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
        } 
    }
    while (shape->width <=0){
        printf("Enter width of rectange(m):");
        scanf("%f", &shape->width);
        if (shape->width <= 0) {
            printf("Error: Only positive number input! Please input again. \n");
            char c;
            while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
        }
    }

    //Calculate area and circumference
    shape->area = shape->length * shape->width;
    shape->circumference = 2.0 *shape->length + 2.0 * shape->width;
    shape->two_dimension = true;
}

/* 2D Triangle */
void triangle(struct Shape *shape){

    while(true){
        // Ask for input parameters
        while (shape->length <= 0){
            printf("Enter length 1 of triangle(m):");
            scanf("%f", &shape->length);
            if (shape->length <= 0) {
                printf("Error: Only positive number input! Please input again. \n");
                char c;
                while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
            }
        }
        while (shape->length2 <= 0){
            printf("Enter length 2 of triangle(m):");
            scanf("%f", &shape->length2);
            if (shape->length2 <= 0) {
                printf("Error: Only positive number input! Please input again. \n");
                char c;
                while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
            }
        }
        while (shape->length3 <= 0){
            printf("Enter length 3 of triangle(m):");
            scanf("%f", &shape->length3);
            if (shape->length3 <= 0) {
                printf("Error: Only positive number input! Please input again. \n");
                char c;
                while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
            }
        }
        if (!(shape->length + shape->length2 > shape->length3 && shape->length2 + shape->length3 > shape->length && shape->length3 + shape->length > shape->length2)){
            printf("Invalid triangle length! The sum of the length of any two sides of a triangle must be greater than the length of the third side.\n");
            shape->length = 0; shape->length2 = 0; shape->length3 = 0;
        }
        else {break;}
    }


    //Calculate area and circumference
    float s = (shape->length + shape->length2 + shape->length3) / 2.0;
    shape->area = sqrt(s * (s - shape->length) * (s - shape->length2) * (s - shape->length3));
    shape->circumference = shape->length + shape->length2 + shape->length3;
    shape->two_dimension = true;
}

/* 2D Circle */
void circle(struct Shape *shape){

    // Ask for input parameters
    while (shape->radius <= 0){
        printf("Enter radius of circle(m):");
        scanf("%f", &shape->radius);
        if (shape->radius <= 0) {
            printf("Error: Only positive number input! Please input again. \n");
            char c;
            while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
        }
    }

    //Calculate area and circumference
    shape->area = M_PI * pow(shape->radius, 2);
    shape->circumference = 2.0 * M_PI * (shape->radius);
    shape->two_dimension = true;
}

/* 3D Cube */
void cube (struct Shape *shape){

    // Ask for input parameters
    while (shape->length <= 0){
        printf("Enter length of cube(m):");
        scanf("%f", &shape->length);
        if (shape->length <= 0) {
            printf("Error: Only positive number input! Please input again. \n");
            char c;
            while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
        }
    }

    //Calculate circumference, surface area and volume
    shape->circumference = 12.0 * shape->length;
    shape->surface_area = 6.0 * pow(shape->length,2);
    shape->volume = pow(shape->length,3);
    shape->two_dimension = false;
}

/* 3D Cuboid */
void cuboid (struct Shape *shape){

    // Ask for input parameters
    while (shape->length <= 0){
        printf("Enter length of cuboid(m):");
        scanf("%f", &shape->length);
        if (shape->length <= 0) {
            printf("Error: Only positive number input! Please input again. \n");
            char c;
            while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
        }
    }
    while (shape->width <= 0){
        printf("Enter width of cuboid(m):");
        scanf("%f", &shape->width);
        if (shape->width <= 0) {
            printf("Error: Only positive number input! Please input again. \n");
            char c;
            while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
        }
    }
    while (shape->height <= 0){
        printf("Enter height of cuboid(m):");
        scanf("%f", &shape->height);
        if (shape->height <= 0) {
            printf("Error: Only positive number input! Please input again. \n");
            char c;
            while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
        }
    }

    //Calculate circumference, surface area and volume
    shape->circumference = 4.0 * (shape->length + shape->width + shape->height);
    shape->surface_area = 2.0 * ( (shape->length * shape->width) + (shape->length + shape->height) + (shape->width + shape->height) );
    shape->volume = shape->length * shape->width * shape->height;
    shape->two_dimension = false;
}

/* 3D Sphere */
void sphere (struct Shape *shape){

    // Ask for input parameters
    while (shape->radius <= 0){
        printf("Enter radius of sphere(m):");
        scanf("%f", &shape->radius);
        if (shape->radius <= 0) {
            printf("Error: Only positive number input! Please input again. \n");
            char c;
            while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
        }
    }

    //Calculate circumference, surface area and volume
    shape->circumference = 2.0 * M_PI * (shape->radius);
    shape->surface_area = 4.0 * M_PI * pow(shape->radius, 2);
    shape->volume =  (4.0/3.0) * M_PI * pow(shape->radius, 3);
    shape->two_dimension = false;
}

/* 3D Cone */
void cone (struct Shape *shape){

    // Ask for input parameters
    while (shape->radius <= 0){
        printf("Enter radius of cone(m):");
        scanf("%f", &shape->radius);
        if (shape->radius <= 0) {
            printf("Error: Only positive number input! Please input again. \n");
            char c;
            while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
        }
    }
    while (shape->height <= 0){
        printf("Enter height of cone(m):");
        scanf("%f", &shape->height);
        if (shape->height <= 0) {
            printf("Error: Only positive number input! Please input again. \n");
            char c;
            while((c = getchar()) != '\n' &&  c != EOF){};      //Clear input buffer
        }
    }

    //Calculate circumference, surface area and volume
    shape->circumference = 2 * M_PI * (shape->radius);
    shape->surface_area = M_PI * shape->radius * (shape->radius + sqrt(pow(shape->height, 2) + pow(shape->radius, 2)));
    shape->volume = M_PI * pow(shape->radius, 2) * shape->height / 3.0;
    shape->two_dimension = false;
}


// Print input parameters and output results
void output(struct Shape *shape){
    printf("-------------------------Output-------------------------\n");

    //Print input shape and parameters
    printf("Types of 2D or 3D object: %s \n", shape->shape_input);
    if (strcmp(shape->shape_input, "square") == 0 || strcmp(shape->shape_input, "cube") == 0){
        printf("Length: %f m \n", shape->length);
    }
    else if(strcmp(shape->shape_input, "circle") == 0 || strcmp(shape->shape_input, "sphere") == 0){
        printf("Radius: %f m \n", shape->radius);
    }
    else if (strcmp(shape->shape_input, "triangle") == 0){
        printf("Length 1: %f m \n", shape->length);
        printf("Length 2: %f m \n", shape->length2);
        printf("Length 3: %f m \n", shape->length3);
    }
    else if(strcmp(shape->shape_input, "cone") == 0){
        printf("Radius: %f m \n", shape->radius);
        printf("Height: %f m \n", shape->height);
    }
    else if(strcmp(shape->shape_input, "rectange") == 0){
        printf("Length: %f m \n", shape->length);
        printf("Width: %f m \n", shape->width);
    }
    else if(strcmp(shape->shape_input, "cuboid") == 0){
        printf("Length: %f m \n", shape->length);
        printf("Width: %f m \n", shape->width);
        printf("Height: %f m \n", shape->height);
    }

    //Print output results
    if (shape->two_dimension){
        printf("Area: %f m^2 \n", shape->area);
        printf("Circumference: %f m \n", shape->circumference);
    }
    else{
        printf("Circumference: %f m \n", shape->circumference);
        printf("Surface area: %f m^2 \n", shape->surface_area);
        printf("Volume: %f m^3 \n", shape->volume);
    }
    char c;
    while((c = getchar()) != '\n' &&  c != EOF){};   
}


int main (int argc, char *argv[]) {
    
    if (argc != 1){
        printf("Please enter one argument only \n");
        exit(0);
    }
    
    do{
        // Intiatlise shape struct members as 0
        struct Shape shape = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        
        printf("Enter -1 to exit the program. \n");
        printf("Enter choice for shape (square, triangle, circle, rectangle, cube, sphere, cone & cuboid) : ");
        fgets(shape.shape_input, sizeof shape.shape_input, stdin);
        sscanf(shape.shape_input, "%s", shape.shape_input);

        // Verify shape inputs and prompt corresponding functions
        if (strcmp(shape.shape_input, "square") == 0){
            square(&shape);
            output(&shape); 
        }
        else if (strcmp(shape.shape_input, "triangle") == 0){
            triangle(&shape);
            output(&shape); 
        }
        else if (strcmp(shape.shape_input, "circle") == 0){
            circle(&shape);
            output(&shape); 
        }
        else if (strcmp(shape.shape_input, "rectangle") == 0){
            rectangle(&shape);
            output(&shape);
        }
        else if (strcmp(shape.shape_input, "cube") == 0){
            cube(&shape);
            output(&shape); 
        }
        else if (strcmp(shape.shape_input, "sphere") == 0){
            sphere(&shape);
            output(&shape); 
        }
        else if (strcmp(shape.shape_input, "cone") == 0){
            cone(&shape);
            output(&shape); 
        }
        else if (strcmp(shape.shape_input, "cuboid") == 0){
            cuboid(&shape);
            output(&shape); 
        }
        // Exit program when input is "-1"
        else if (strcmp(shape.shape_input, "-1") == 0){
            printf("Exiting program... \n");
            exit(0);
        }    
        else{
            printf ("Error: Invalid shape input! Please input again. \n");
        }
        
    } while(true);   
}
