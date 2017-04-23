#include <stdio.h>
#include <math.h>

//float equation(float x, float a, float b, float c, float d){
//      return a*x*x*x + b*x*x + c*x + d;
//}
float a, b, c, d;

int main(){
      //Entering the values of equation
      printf ("Finding the root by bisection method\n"
      "Format of equation: a*x^3 + b*x^2 + c*x + d\n"
      "Enter a: ");
      scanf ("%f", &a);
      printf ("Enter b: ");
      scanf ("%f", &b);
      printf ("Enter c: ");
      scanf ("%f", &c);
      printf ("Enter d: ");
      scanf ("%f", &d);

      //Entering upper and lower limit with tolerance
      float lower, upper;
      printf ("Enter the lower number: ");
      scanf ("%f", &lower);
      printf ("Enter the upper number: ");
      scanf ("%f", &upper);
      printf ("\nThe Equation: (%.f)x^3  +  (%.f)x^2  +  (%.f)x  +  (%.f)\n", a, b, c, d);
      printf ("Entered Values: %.f    %.f\n\n", lower, upper);

      float middle, tolerance;
      printf ("Enter the tolerance of equation(sometimes between 0.1 - 0.0001): ");
      scanf ("%f", &tolerance);
      printf ("Tolerance = %f\n\n", tolerance);

      //result = equation(a,b,c,d,x);
      //float eq_lower = equation(lower,a,b,c,d);
      //float eq_upper = equation(upper,a,b,c,d);
      ////float eq_lower = pow(lower, 3)*a + pow(lower, 2)*b + lower*c + d;
      ////float eq_upper = pow(upper, 3)*a + pow(upper, 2)*b + upper*c + d;
      ////middle = (lower + upper) / 2;
      //float eq_middle = equation(middle,a,b,c,d);
      ////float eq_middle = pow(middle, 3)*a + pow(middle, 2)*b + middle*c + d;

      //General alghoritm framework
      int flag = 0;
      while (flag == 0){
            float eq_lower = pow(lower, 3)*a + pow(lower, 2)*b + lower*c + d;
            float eq_upper = pow(upper, 3)*a + pow(upper, 2)*b + upper*c + d;

            if(eq_upper * eq_lower >= 0){
                  printf ("No root\n ");
                  flag = 1;
                  break;
            }
                  //float eq_middle = equation(middle,a,b,c,d);
                  /* float eq_lower = equation(lower,a,b,c,d);
                  float eq_upper = equation(upper,a,b,c,d);
                  middle = (lower + upper) / 2;
                  float eq_middle = equation(middle,a,b,c,d);*/

                  middle = (lower + upper) / 2;
                  float eq_middle = pow(middle, 3)*a + pow(middle, 2)*b + middle*c + d;
                  if (eq_middle * eq_lower > 0)
                        lower = middle;
                  else if(eq_middle * eq_lower < 0)
                        upper = middle;
                  else{
                        //printf ("No root\n");
                        break;
                  }

                        if (0 <= eq_middle && eq_middle <= tolerance){
                              printf ("The root of equation is: %f\n", middle);
                              flag = 1;
                  }
      }
      return 0;
}
