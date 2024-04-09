// write a C programme to add to numbers
#include <stdio.h>
void main()
{
  int num1,num2,add;
  printf("Enter first number: ");
  scanf("%d",&num1);
  printf("Enter second number: ");
  scanf("%d", &num2);
  add = num1 + num2;
  printf("The sum is %d",add);
  return 0;
  getch();
}

