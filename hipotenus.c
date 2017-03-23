#include <stdio.h>
#include <math.h>

float hipotenus(float c, float a, float b);

float hipotenus (float c, float a, float b){
      c =  pow(a*a + b*b, 1/2);
}

int main (){
      float a, b, c;
      printf ("Enter a and b: ");
      scanf ("%f%f", &a, &b);
      //c = hipotenus(c, a, b);
      c = pow(a*a + b*b, 1.0/2);
      printf ("C = %f", c);
      return 0;
}
