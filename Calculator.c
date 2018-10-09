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
#include "Calculator.h"

int Menu(int* c)
{
  double o1;
  double o2;
  double n;
  double result;

  printf("Choose one of the following operations:\n");
  printf("Add (1)\n");
  printf("Subtract (2)\n");
  printf("Multiply (3)\n");
  printf("Divide (4)\n");
  printf("Arithmetic Series (5)\n");
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
    case 5:
    printf("Please enter your Number: ");
    scanf("%lf",&n );
    if(n>1)
    {
      ArithmeticSeries(n,&result);
      OutputResult(result);
      printf(" \n");
    }
    else
    {
      printf("Number must be bigger than 1! \n");
      printf(" \n");
    }

    break;
    default:
    printf("Input not allowed, please try again\n");
    printf(" \n");

    }
    return *c;
}

void OutputResult(double result)
{
  if(result<=DBL_MAX&&result>=-DBL_MAX)
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

void ArithmeticSeries(double n,double* result)
{
  for(double i=1;i<=n;i++)
  {
    *result=*result+i;
  }
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
