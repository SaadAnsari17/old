#include<stdio.h>
#include<math.h>

#define f(x) cos(x) - x * exp(x)

void main()
{
	 float a, b, c, f0, f1, f2, e;
	 int step = 1;
	 clrscr();
	 
	 up:
	 printf("\nEnter two initial guesses:\n");
	 scanf("%f%f", &a, &b);
	 printf("Enter tolerable error:\n");
	 scanf("%f", &e);
	 
	 f0 = f(a);
	 f1 = f(b);
	
	 if( f0 * f1 > 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		  goto up;
	 }
   
	 printf("\nStep\t\ta\t\tb\t\tc\t\tf(c)\n");
	 do
	 {
		  c = (a + b)/2;
		  f2 = f(c);
		
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step, a, b, c, f2);
		
		  if( f0 * f2 < 0)
		  {
			   b = c;
			   f1 = f2;
		  }
		  else
		  {
			   a = c;
			   f0 = f2;
		  }
		  step = step + 1;
	 }while(fabs(f2)>e);
	 printf("\nRoot is: %f", c);
	 getch();
}
