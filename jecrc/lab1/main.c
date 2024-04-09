// write a C programme to add to numbers
// #include <stdio.h>
// void main()
// {
//   int num1,num2,add;
//   printf("Enter first number: ");
//   scanf("%d",&num1);
//   printf("Enter second number: ");
//   scanf("%d", &num2);
//   add = num1 + num2;
//   printf("The sum is %d",add);
//   return 0;
//   getch();
// }

//write a C programme to add , Substract, Multiply, Divide
#include <stdio.h>
void main()
{
    int num1, num2 , add, subs, Multiply, quo, rem;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    add = num1 + num2;
    subs = num1 - num2;
    Multiply = num1*num2;
    quo = num1/num2;
    rem = num1 % num2;
    printf("The sum is %d\n",add);
    printf("The substraction is%d\n",subs);
    printf("The Multiply is %d\n",Multiply);
    printf("The quotient is %d\n",quo);
    printf("The remainder is %d\n",rem);
}
