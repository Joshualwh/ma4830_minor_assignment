#include <stdio.h>
#include <math.h>

void cube (float* length)
{
   float circumference, surface_area, volume;
   circumference = 12 * (*length);
   surface_area = 6 * pow((*length),2);
   volume = pow((*length),3);
   printf("circumference = %f m \n", circumference);
   printf("surface area = %f m \n", surface_area);
   printf("volume = %f m \n", volume);
}

void cuboid (float* length, float* width, float* height)
{
   float circumference, surface_area, volume;
   circumference = 4 * ((*length) + (*width) + (*height));
   surface_area = 2 * ( ((*length) + (*width)) + ((*length) + (*height)) + ((*width) + (*height)) );
   volume = (*length) * (*width) * (*height);
   printf("circumference = %f m \n", circumference);
   printf("surface area = %f m \n", surface_area);
   printf("volume = %f m \n", volume);
}

void sphere (float* radius)
{
   float circumference, surface_area, volume;
   circumference = 2 * M_PI * (*radius);
   surface_area = 4 * M_PI * pow((*radius),2);
   volume =  (4.0/3) * M_PI * pow((*radius),3);
   printf("circumference = %f m \n", circumference);
   printf("surface area = %f m \n", surface_area);
   printf("volume = %f m \n", volume);
}

void cone (float* radius, float* height)
{
   float circumference, surface_area, volume;
   circumference = 2 * M_PI * (*radius);
   surface_area = M_PI * (*radius) * ((*radius) + sqrt(pow((*height),2) + pow((*radius),2)));
   volume = M_PI * pow((*radius),2) * (*height)/3;
   printf("circumference = %f m \n", circumference);
   printf("surface area = %f m \n", surface_area);
   printf("volume = %f m \n", volume);
}

int main () {

   /* local variable definition */

  float *l, *w, *h, *r;
  float length = 10.0, width = 10.0, height = 20.0, radius = 5.0;
  l = &length;  
  w = &width;
  h = &height;
  r = &radius;
  cube(l);
  printf("\n");
  cuboid(l, w, h);
  printf("\n");
  sphere(r);
  printf("\n");
  cone(r,h);
}