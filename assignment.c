#include <stdio.h>
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
        if (shape->length <= 0) printf("Error: Only positive input! Please input again. \n");
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
        if (shape->length <= 0) printf("Error: Only positive input! Please input again. \n");
    }
    while (shape->width <=0){
        printf("Enter width of rectange(m):");
        scanf("%f", &shape->width);
        if (shape->width <= 0) printf("Error: Only positive input! Please input again. \n");
    }

    //Calculate area and circumference
    shape->area = shape->length * shape->width;
    shape->circumference = 2.0 *shape->length + 2.0 * shape->width;
    shape->two_dimension = true;
}

/* 2D Circle */
void circle(struct Shape *shape){

    // Ask for input parameters
    while (shape->radius <= 0){
        printf("Enter radius of circle(m):");
        scanf("%f", &shape->radius);
        if (shape->radius <= 0) printf("Error: Only positive input! Please input again. \n");
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
        if (shape->length <= 0) printf("Error: Only positive input! Please input again. \n");
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
        if (shape->length <= 0) printf("Error: Only positive input! Please input again. \n");
    }
    while (shape->width <= 0){
        printf("Enter width of cuboid(m):");
        scanf("%f", &shape->width);
        if (shape->width <= 0) printf("Error: Only positive input! Please input again. \n");
    }
    while (shape->height <= 0){
        printf("Enter height of cuboid(m):");
        scanf("%f", &shape->height);
        if (shape->height <= 0) printf("Error: Only positive input! Please input again. \n");
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
        if (shape->radius <= 0) printf("Error: Only positive input! Please input again. \n");
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
        if (shape->radius <= 0) printf("Error: Only positive input! Please input again. \n");
    }
    while (shape->height <= 0){
        printf("Enter height of cone(m):");
        scanf("%f", &shape->height);
        if (shape->height <= 0) printf("Error: Only positive input! Please input again. \n");
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
}


int main (int argc, char *argv[]) {
    
    // Intiatlise shape struct members as 0
    struct Shape shape = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // Verify shape inputs and prompt corresponding functions
    do{
        printf("Enter choice for shape (square, circle, rectangle, cube, sphere, cone & cuboid) : ");
        fgets(shape.shape_input, sizeof shape.shape_input, stdin);
        sscanf(shape.shape_input, "%s", shape.shape_input);   
        if (strcmp(shape.shape_input, "square") == 0){
            square(&shape);
            break;
        }
        else if (strcmp(shape.shape_input, "circle") == 0){
            circle(&shape);
            break;
        }
        else if (strcmp(shape.shape_input, "rectangle") == 0){
            rectangle(&shape);
            break;
        }
        else if (strcmp(shape.shape_input, "cube") == 0){
            cube(&shape);
            break;
        }
        else if (strcmp(shape.shape_input, "sphere") == 0){
            sphere(&shape);
            break;
        }
        else if (strcmp(shape.shape_input, "cone") == 0){
            cone(&shape);
            break;
        }
        else if (strcmp(shape.shape_input, "cuboid") == 0){
            cuboid(&shape);
            break;
        }
        else{
            printf ("Error: Invalid shape input! Please input again. \n");
        }
    } while(true);
        
    output(&shape);
}
