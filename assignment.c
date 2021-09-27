#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

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

/* 2D Square */
void square(struct Shape *shape){
    printf("Enter length of square(m):");
    scanf("%f", &shape->length);
    shape->area = shape->length * shape->length;
    shape->circumference = 4 * shape->length;
    shape->two_dimension = true;
}

/* 2D Rectangle */
void rectangle(struct Shape *shape){
    printf("Enter length of rectange(m):");
    scanf("%f", &shape->length);
    printf("Enter width of rectange(m):");
    scanf("%f", &shape->width);
    shape->area = shape->length * shape->width;
    shape->circumference = 2*(shape->length) + 2*(shape->width);
    shape->two_dimension = true;
}

/* 2D Circle */
void circle(struct Shape *shape){
    printf("Enter radius of circle(m):");
    scanf("%f", &shape->radius);
    shape->area = M_PI * pow(shape->radius, 2);
    shape->circumference = 2 * M_PI * (shape->radius);
    shape->two_dimension = true;
}



void output(struct Shape *shape){
    printf("Types of 2D or 3D object: %s \n", shape->shape_input);
    if (strncmp(shape->shape_input, "square", 7) == 0 || strncmp(shape->shape_input, "cube", 5) == 0){
        printf("Length: %f m \n", shape->length);
    }
    else if(strncmp(shape->shape_input, "circle", 7) == 0 || strncmp(shape->shape_input, "sphere", 5) == 0){
        printf("Radius: %f m \n", shape->radius);
    }
    else if(strncmp(shape->shape_input, "cone", 5) == 0){
        printf("Radius: %f m \n", shape->radius);
        printf("Height: %f m \n", shape->height);
    }
    else if(strncmp(shape->shape_input, "rectange", 10) == 0){
        printf("Length: %f m \n", shape->length);
        printf("Width: %f m \n", shape->width);
    }
    else if(strncmp(shape->shape_input, "cuboid", 7) == 0){
        printf("Length: %f m \n", shape->length);
        printf("Width: %f m \n", shape->width);
        printf("Height: %f m \n", shape->height);
    }
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


int main () {
    
    struct Shape shape;
    printf("Enter choice for shape : ");
    scanf("%s", shape.shape_input);
    const char square_[] = "square";
    const char circle_[] = "circle";
    const char rectangle_[] = "rectangle";
    const char cube_[] = "cube";
    const char sphere_[] = "sphere";
    const char cone_[] = "cone";
    const char cuboid_[] = "cuboid";

   if (strncmp(shape.shape_input, square_, 7) == 0){
      square(&shape);
   }
   else if (strncmp(shape.shape_input, circle_, 7) == 0){
      circle(&shape);
   }
   else if (strncmp(shape.shape_input, rectangle_, 10) == 0){
      rectangle(&shape);
   }
   else if (strncmp(shape.shape_input, cube_, 5) == 0){
    //   cube();
   }
   else if (strncmp(shape.shape_input, sphere_, 7) == 0){
    //   sphere();
   }
   else if (strncmp(shape.shape_input, cone_, 5) == 0){
    //   cone();
   }
   else if (strncmp(shape.shape_input, cuboid_, 7) == 0){
    //   cuboid();
   }
   else{
      printf ("Error! No shape found!");
   }
    
    output(&shape);
}
