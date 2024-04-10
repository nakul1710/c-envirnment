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


// #include <stdio.h>
// void main()
// {
//     int num1, num2 , add, subs, Multiply, quo, rem;
//     printf("Enter num1: ");
//     scanf("%d",&num1);
//     printf("Enter num2: ");
//     scanf("%d",&num2);
//     add = num1 + num2;
//     subs = num1 - num2;
//     Multiply = num1*num2;
//     quo = num1/num2;
//     rem = num1 % num2;
//     printf("The sum is %d\n",add);
//     printf("The substraction is%d\n",subs);
//     printf("The Multiply is %d\n",Multiply);
//     printf("The quotient is %d\n",quo);
//     printf("The remainder is %d\n",rem);
// }

//Write a C programme to calculate area of rectangle
// #include <stdio.h>
// void main(){
//     int Length,Breadth,area;
//     printf("Enter the Length = ");
//     scanf("%d",&Length);
//     printf("Enter the Breadth = ");
//     scanf("%d",&Breadth);
//     area = Length*Breadth;
//     printf("The area is %d",area);
//     getch();
// }

//write a C programme to calculate the area of the circle.
// #include <stdio.h>
// void main(){
//     float r,area;
//     printf("Enter r = ");
//     scanf("%f",&r);
//     area = 3.14*r*r;
//     printf("The area of the circle is %f\n", area);
// }

//Write a c program to swap two variables 
//  #include <stdio.h>
//  void main(){
//  int a, b, temp;
//  printf("Enter a = ");
//  scanf("%d",&a);
//  printf("Enter b = ");
//  scanf("%d",&b);
//  temp = a;
//  a = b;
//  b = temp;
//  printf("After swaping \n a = %d\n b =%d\n",a,b);
// }

//Write a C program to print reverse of the  number.
#include <stdio.h>
void main(){
    int a,q,r,rev ;
    printf("Enter Number = ");
    scanf("%d",&a);
    q = a/10;
    r = a%10;
    rev = r*10 + q;
    getch();
}