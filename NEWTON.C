double ff(double x)
{
  return(x*x*x-5*x-11);
}
double df(double x)
{
 return(3*x*x - 5);
}



void main()
{
 double x0,e,f,g,x1,x;
 int step = 1;
 clrscr();
 printf("Enter Initial guess ");
 scanf("%lf",&x0);
 printf("Enter degree of accuracy ");
 scanf("%ld",&e);
 clrscr();
 printf("STEP	X0	f(x0)	f'(x0)	x1\n");
 do
 {
  f = ff(x0);
  g = df(x0);
  if(g == 0)
  {
   printf("Mathematical error ");
   exit(0);
  }
  x1  = x0 - f/g;
  printf("%d\t%lf\t%lf\t%lf\t%lf\n",step,x0,f,g,x1);
  step++;
  x = x0;
  x0 = x1;

  }while(fabs(x0-x)>e);
  printf("Root is %lf",x1);
 getch();
 }

