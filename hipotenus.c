#include <stdio.h>
#include <math.h>

float hipotenus(float a, float b);



int main (){
      float a, b, c;
      printf ("Enter a and b: ");
      scanf ("%f%f", &a, &b);
      c = hipotenus(a, b);
      //c = pow(a*a + b*b, 1.0/2);
      printf ("C = %f", c);
      return 0;
}

float hipotenus (float a, float b){
      float c;
      c =  pow(a*a + b*b, 1.0/2);
      //pow(a*a + b*b, 1.0/2);
      //printf ("c= %f\n", c);
      return c;
}
