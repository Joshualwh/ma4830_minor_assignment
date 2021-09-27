#include <stdio.h>
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

