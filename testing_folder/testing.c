#include <stdio.h>
#include <string.h>

/* User Input to choose which one to run and calculate */
void user_input (char *shape_chosen) {

   const char square[] = "square";
   const char circle[] = "circle";
   const char rectangle[] = "rectangle";
   const char cube[] = "cube";
   const char sphere[] = "sphere";
   const char cone[] = "cone";
   const char cuboid[] = "cuboid";

   if (strncmp(shape_chosen, square, 7) == 0){
      square();
   }
   else if (strncmp(shape_chosen, circle, 7) == 0){
      circle();
   }
   else if (strncmp(shape_chosen, rectangle, 10) == 0){
      rectangle();
   }
   else if (strncmp(shape_chosen, cube, 5) == 0){
      cube();
   }
   else if (strncmp(shape_chosen, sphere, 7) == 0){
      sphere();
   }
   else if (strncmp(shape_chosen, cone, 5) == 0){
      cone();
   }
   else if (strncmp(shape_chosen, cuboid, 7) == 0){
      cuboid():
   }
   else{
      printf ("Error! No shape found!");
   }

   // const char shape_choices[7][10] = {"square ", "circle ", "rectangle ", "cube ", "sphere ", "cone ", "cuboid "};

   // int n = 0;
   // while (n < 8){
   //    printf ("%s", shape_choices[n]);
   //    n++;
   // }

   // int checking_status1, checking_status2;

   // printf("%s\n", shape_chosen);
   // printf("%s\n", cube);
   // checking_status1 = strncmp(shape_chosen, cube, 5);
   // checking_status2 = strncmp(shape_chosen, square, 7);

   // printf("%d, %d\n", checking_status1, checking_status2);

   // while (checking_status != 0){
   //    checking_status = strncmp(shape_chosen, cube, 4);
   // }
   // if (strncmp(shape_chosen, cube, 4) == 0){
   //    printf("%s", shape_chosen);
   // }

   //  printf("%d \n", area);
   //  printf("%d \n", square_perimeter);
}


int main () {

   char shape_input[10];
   printf("Enter choice for shape : ");
   scanf("%s", shape_input);
   // printf("%s\n", shape_input);
   user_input(shape_input);
   // if shape_input 
}
#include <math.h>

void square(double* length){
  /* 2D Square */
  double area, perimeter;
    
  printf("Length = %lf m \n", *length);

  area = (*length)*(*length);
  perimeter = 4*(*length);

  printf("Area = %lf m \n", area);
  printf("Perimeter = %lf m \n", perimeter);
  printf("\n");

}

void rectangle(double* short_side, double* long_side){
  /* 2D Rectangle */
  double area, perimeter;

  printf("Short side = %lf m \n", *short_side);
  printf("Long side = %lf m \n", *long_side);

  area = (*short_side)*(*long_side);
  perimeter = 2*(*short_side) + 2*(*long_side);

  printf("Area = %lf m \n", area);
  printf("Perimeter = %lf m \n", perimeter);
  printf("\n");

}

void circle(double* radius){
  /* 2D Circle */
  double area, perimeter;

  printf("Radius = %lf m \n", *radius);

  area = M_PI * pow((*radius), 2);
  perimeter = 2 * M_PI * (*radius);

  printf("Area = %lf m \n", area);
  printf("Perimeter = %lf m \n", perimeter);
  printf("\n");

}


int main () {
  double* l, *short_l, *long_l, *r; 
  double length = 10.0, short_length = 10.0, long_length = 20.0, radius = 10.0;
  l = &length;
  short_l = &short_length;
  long_l = &long_length;
  r = &radius;  
  square(l);
  rectangle(short_l, long_l);
  circle(r);
}

