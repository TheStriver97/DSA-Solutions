#include <stdio.h>

void
pattern10 (int n)
{
  for (int i = 0; i <= 2 * n - 1; i++)
	{
	    
	  int stars = i;
	  if(i>n){stars = 2*n-i;}
	  for (int j = 1; j <= stars; j++)
		{
		  printf ("*");
		}
	  printf ("\n");
	}

}


int
main ()
{
  int n = 5;
  pattern10 (n);
  return 0;
}