#include <stdio.h>
int main(void)
{
  int number, degisken;
  printf ("Enter the number: ");
  scanf ("%d", &number);

  printf ("Entered number: %d\n", number);

  if (number < 0)
  {
  degisken = 1;
  }
  else //if (number > 0)
  {
    if (number % 2 == 0)
    {
      degisken = 2;
    }
    else
    {
    degisken = 3;
    }
  }

  /*else if (number > 0 || number % 2 != 0)
  {
  degisken = 3;
  }
*/


  switch (degisken)
  {
    case 1:
    printf ("Number is smaller than 0\n");
    break;

    case 2:
    printf ("Number is bigger than 0 and cift number\n");
    break;

    case 3:
    printf ("Number is bigger than 0 and tek number\n");
    break;

    default:
    break;
   }
  return 0;

}
