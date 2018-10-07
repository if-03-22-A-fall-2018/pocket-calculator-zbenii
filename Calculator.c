/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <2AHIF>
 * ---------------------------------------------------------
 * Exercise Number: 2
 * Title:			<Pocket Calculator>
 * Author:			<Benjamin Besic>
 * ----------------------------------------------------------
 * Description:
 * <It's a simple calculator with 2 operands.
 *  You can Add,Subtract,Multiply and Divide>
 * ----------------------------------------------------------
 */

#include <stdio.h>
#include <float.h>

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
  GetOperands(&o1,&o2);
  Add(o1,o2,&result);
  OutputResult(result);
  printf(" \n");
  break;
  case 2:
  GetOperands(&o1,&o2);
  Subtract(o1,o2,&result);
  OutputResult(result);
  printf(" \n");
  break;
  case 3:
  GetOperands(&o1,&o2);
  Multiply(o1,o2,&result);
  OutputResult(result);
  printf(" \n");
  break;
  case 4:
  GetOperands(&o1,&o2);
  if(o2!=0)
  {
    Divide(o1,o2,&result);
    OutputResult(result);
    printf(" \n");
  }
  else
  {
    printf("Division by Zero! \n");
    printf(" \n");
  }
  break;
  default:
  printf("Input not allowed, please try again\n");
  printf(" \n");

}
}

void OutputResult(double result)
{
  if(result>DBL_MAX)
  {
    printf("Number overflow! \n");
  }
  else if(result<-DBL_MAX)
  {
    printf("Number underflow! \n");
  }
  else
  {
  printf("The result is: %lf\n", result);
  }
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

  *result=x+y;
}

void Subtract(double x, double y, double* result)
{
  *result=x-y;
}

void Multiply(double x, double y,double* result)
{
  *result=x*y;
}

void Divide(double x, double y, double* result)
{
  *result= x/y;
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
