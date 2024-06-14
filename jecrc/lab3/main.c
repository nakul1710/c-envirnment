// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);
//     for(i=0; i<n; i++){
//     if(i%2 == 0 ){
//       printf("0");
//     }
//     else{
//      printf("1");
//     }
//     }
//  return 0;
// }

// #include<stdio.h>
//  void fibonacci(int n){
//    int i,first=0,second=1,next,num_term;
//    printf("Enter number of terms %d: ",n);
//    for(i=0; i<n; i++){
//     if(i <= 1){
//       next = i;
//     }
//     else{
//         next = first + second;
//         first = second;
//         second = next;
//     }
//     printf("%d",next);
//    }
//    printf("\n");

//  }
//  int main() {
//     int num_terms;

//     printf("Enter the number of terms in Fibonacci sequence: ");
//     scanf("%d", &num_terms);

//     fibonacci(num_terms);

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int i, n, sum =0;
//     printf("Enter n:");
//     scanf("%d",&n);
//     for(i=0; i<=n; i++){
//    sum += i;
//     }
//     printf("Sum of first n natural number is: %d\n",sum);
// }



// #include<stdio.h>
// int main() {
//     int num, fact = 1;
//     printf("Enter a number to find its factorial: ");
//     scanf("%d", &num);
//     if (num < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//     } 
//     else {
//         for (int i = 1; i <= num; ++i) {
//             fact *= i;
//         }
//         printf("Factorial of %d is: %d\n", num, fact);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int num,reverse = 0,remainder;
//     printf("Enter the number: "); 
//     scanf("%d",&num);
//     while(num>0){
//         remainder = num%10;
//         reverse = reverse*10+remainder;
//         num = num/10;
//     }
//     printf("The reverse of the number is: %d\n", reverse);
// }


//  #include<stdio.h>
// int main(){
//     int num,originalNumber,reverse = 0,remainder;
//     printf("Enter the number: "); 
//     scanf("%d",&num);
//     originalNumber = num;
//     while(num>0){
//         remainder = num%10;
//         reverse = reverse*10+remainder;
//         num = num/10;
//     }
//     if (originalNumber == reverse) {
//         printf("%d is a palindrome number.\n", originalNumber);
//     } else {
//         printf("%d is not a palindrome number.\n", originalNumber);
//     }

// }


// #include<stdio.h>
// int main(){
//     int num,remainder, sum = 0;
//     printf("Enter the number: "); 
//     scanf("%d",&num);
//     while(num>0){
//         remainder = num%10;
//         sum += remainder;
//         num = num/10;
//     }
//    printf("The sum of digits is: %d\n",sum);
// }



// #include<stdio.h>
// #include<math.h>
// int main(){
//     int num,remainder, sum = 0;
//     printf("Enter the number: "); 
//     scanf("%d",&num);
//     while(num>0){
//         remainder = num%10;
//         sum += pow(remainder,3);
//         num = num/10;
//     }
//    printf("The sum of the cube of %d digits is: %d\n",num,sum);
// }


#include<stdio.h>
#include<math.h>
int main(){
    int num,originalNum,remainder, sum = 0,n = 0;
    printf("Enter the number: "); 
    scanf("%d",&num);
    originalNum = num;
   while(originalNum>0){
   originalNum /= 10;
   n++;
   }
  originalNum = num;
    while(num>0){
        remainder = num%10;
        sum += pow(remainder,3);
        num = num/10;
        originalNum /= 10;
    }
    num = originalNum;
    if(sum == num){
         printf("%d is an Armstrong number.\n", originalNum);
    }
    else{
        printf("%d is not an Armstrong number.\n", originalNum);
    }

}   