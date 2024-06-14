// // #include<stdio.h>
// // int main(){
// //     int i, j,rows,cols;
// //    printf("Enter number of rows:\n");
// //    scanf("%d",&rows);
// //    printf("Enter number of cloumns:\n");
// //    scanf("%d",&cols);

// //    int matrix[10][10],transpose[10][10];
// //    printf("enter the elements of matrix:\n");
// //    for(i=0; i<rows; i++){
// //     for(j=0; j<cols; j++){
// //        printf("elements at [%d][%d]:",i,j);
// //        scanf("%d",&matrix[i][j]); 
// //     }
// //    }
// //    for (i = 0; i < rows; i++) {
// //         for (j = 0; j < cols; j++) {
// //             transpose[j][i] = matrix[i][j];
// //         }
// //     }
// //   printf("The transpose of the matrix is:\n");
// //   for(i=0; i<cols; i++){
// //     for(j=0; j<rows; j++){
// //         printf("%d",transpose[i][j]);
// //     }
// //     printf("\n");
// //   }
// // }

// // #include<stdio.h>
// // int main(){
// //     int i, n,mul;
// //     printf("Enter the number:");
// //     scanf("%d",&n);
// //     i=1;
// //     mul = 1;
// //     while(i<=n){
// //         mul *= i;
// //         i++;
// //     }
// //     printf("The factorial is %d is %d",n,mul);
   
// // }


// #include<stdio.h>
// int main(){
//     int num,r,rev,n;
//     printf("enter the number");
//     scanf("%d",&num);
//     n = num;
//     rev = 0;
//     while(num>0){
//       r = num%10;
//       num = num/10;
//       rev  = rev*10 + r;
//     }
//    if(n == rev){
//     printf("%d is a palindrome number",n);
//    }
//    else {
//     printf("%d is not a palindrome number",n);
//    }

// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//     int i, num,r ,d,n,n1,sum;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     d = 0;
//     n = num;;
//     n1 = num;
//     while (num > 0){
//         num = num/10;
//         d++;
//     }
//     sum =0;
//     while (n>0)
//     {
//         r = r%10;
//         n = n/10;
//         sum = sum + pow(r,d);
        
//     }
//     if(sum == n1){
//         printf("%d is an armstrong number",n1);
//     }
//     else{
//         printf("%d is not a armstrong number",n1);
//     }
    
// }

// #include <stdio.h>

// int main() {
//     int i, j;
    
//     for (i = 1; i <= 5; i++) {
//         for (j = 1; j <= i; j++) {
//             if((i+j)%2 == 0){
//                 printf("1\t");
//             }
//             else{
//                 printf("0\t");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a[10];
//     int i;
//     printf("Enter the 10 elements of the array : \n");
//     for(i=1; i<10; i++){
//    scanf("%d",&a[i]);
//     }
//     printf("Enter elements of an array:");
//     for(i=1; i<10; i++){
//      printf("%d",&a[i]);
//     }
// }


// 
// }


// #include<stdio.h>
// int main(){
//     int a[50],i,j,n,temp;
//     printf("Enter the value of n(n<50):");
//     scanf("%d",&n);
//     printf("Enter the elements in the array:\n");
//         for (i = 0; i < n; i++) { 
//             scanf("%d", &a[i]);
//         }
        
//         for (i = 0; i < n - 1; i++) {
//             for (j = 0; j < n - 1 - i; j++) {
//                 if (a[j] > a[j+1]) {
//                     // Swap the elements
//                     temp = a[j];
//                     a[j] = a[j+1];
//                     a[j+1] = temp;
//                 }
//             }
//         }
//         printf("The sorted array is ");
//         for(i=0; i<=n-1; i++){
//           printf("%d\t",a[i]);
//         }
// }
        
// #include <stdio.h>

// int main() {
//     int a[3][4], i, j;
    
//     // Prompt the user to enter the elements of the matrix
//     printf("Enter the elements of the matrix (3x4):\n");
    
    
//         for(j = 0; j < 4; j++) {
//             scanf("%d", &a[i][j]);
//         }

//         printf("The elements of the matrix are:\n");
//     for(i = 0; i < 3; i++) {
//         for(j = 0; j < 4; j++) {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
//     }
    
// #include<stdio.h>
// int main(){
//     int a[3][4], b[3][4],c[3][4],i,j;
//     printf("Enter the elements of the first matrix:\n");
//     for(i=0; i<3; i++){
//       for(j=0; j<4; j++){
//          scanf("%d",&a[i][j]);
//       }
//     }
//     printf("Enter the elements of second matrix:\n");
//     for(i=0; i<3; i++){
//         for(j=0; j<4; j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0; i<3; i++){
//         for(j=0; j<4; j++){
//             c[i][j] = a[i][j] + b[i][j];
//         }
//     }
// printf("The sum of the matrix is:\n");
// for(i=0; i<3; i++ ){
//   for(j=0; j<4; j++){
//     printf("%d\t",c[i][j]);
//   }
//   printf("\n");
// }
// }
    
   
// #include<stdio.h>
// void sum(int,int);
// void sub(int,int);
// void mul(int,int);
// void div(int,int);
// void main(){
//     int A,B;
//  printf("Enter first number(A):");
//  scanf("%d",&A);
//  printf("Enter first number(B):");
//  scanf("%d",&B);
// sum(A,B);
// }
// void sum (int x , int y){
// int z;
// z = x+y;
// printf("The addition is %d",z);
// }


#include <stdio.h>

int fact(int a);

int main() {
    int a, r;
    printf("Enter a number: ");
    scanf("%d", &a);
    r = fact(a);
    printf("The factorial of %d is: %d\n", a, r);
    return 0;
}

int fact(int a) {
    int i, r = 1;
    for(i = a; i > 0; i--) {
        r *= i;
    }
    return r;
}
