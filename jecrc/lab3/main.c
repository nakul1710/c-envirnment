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