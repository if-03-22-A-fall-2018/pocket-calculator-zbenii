#include <stdio.h>

int main(int argc, char const *argv[])
{
  int choice;

  while(choice!=-1)
  {
  Menu(&choice);
  }

  return 0;
}

int Menu(int* c)
{
  int o1;
  int o2;
  int result;

  printf("Choose one of the following operations:\n ");
  printf("Add (1)\n");
  printf("Subtract (2)\n");
  printf("Multiply (3)\n");
  printf("Divide (4)\n");
  printf("Stop program (-1)\n");
  scanf("%d\n",c);

switch (c)
{
  case 1:
  Add(&o1,&o2,&result);
  OutputResult(&result);
  break;
  case 2:
  break;
  case 3
  break;
  case 4:
  break;
  case -1
  break;
  default:
  printf("Input not allowed, please try again! \n");
  break;
}
}


void OutputResult(int* result)
{
  printf("%s\n",result );
}

void GetOperands(int* x,int* y)
{
    printf("Please enter the first operand: \n");
    scanf("%d",x );
    printf("Please enter the second operand: \n");
    scanf("%d",y );
}

void Add(int* x,int* y,int* result)
{
  GetOperands(&x,&y);
  *result=x+y;
}
