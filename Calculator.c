//BenjaminBesic2AHIF
#include <stdio.h>

int Menu(int* c)
{
  double o1;
  double o2;
  double result;

  printf("Choose one of the following operations:\n");
  printf("Add (1)\n");
  printf("Subtract (2)\n");
  printf("Multiply (3)\n");
  printf("Divide (4)\n");
  printf("Stop program (-1)\n");
  scanf("%d",c);

switch (*c)
{
  case 1:
  Add(o1,o2,&result);
  OutputResult(result);
  break;
  case 2:
  break;
  case 3:
  break;
  case 4:
  break;

}
}


void OutputResult(double result)
{
  printf("%lf\n",result );
}

void GetOperands(double* x,double* y)
{
    printf("Please enter the first operand: \n");
    scanf("%lf",x );
    printf("Please enter the second operand: \n");
    scanf("%lf",y );
}

void Add(double x,double y,double* result)
{
  GetOperands(&x,&y);
  *result=x+y;
}

void Subtract(double x, double y, double* result)
{
  GetOperands(&x,&y);
  *result=x-y;
}

int main(int argc, char const *argv[])
{
  int choice;

  while(choice!=-1)
  {
  Menu(&choice);
  }

  return 0;
}
