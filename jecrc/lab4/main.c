
// ******
// ******
// ******
// ******
// ******
// ******


// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("Enter n");
//     scanf("%d",&n);
//     for(i=0; i<=n; i++){
//      for(j=0; j<=n; j++){
//       printf("*");
//      }
//      printf("\n");
//     }
// }



// *
// **
// ***
// ****
// *****
// ******


// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=0; i<=n; i++){
//         for(j=0; j<=i; j++){
//            printf("*");
//         }
//         printf("\n");
//     }


// }


// *****
// ****
// ***
// **
// *


// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=n; i>=1; i--){
//         for(j=1; j<=i; j++){
//            printf("*");
//         }
//         printf("\n");
//     }
// }

// 1
// 22
// 333
// 4444
// 55555


// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++){
//         for(j=1; j<=i; j++){
//            printf("%d",i);
//         }
//         printf("\n");
//     }
// }

// 1
// 12
// 123
// 1234
// 12345


// #include<stdio.h>
// int main(){
//     int i,j,n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++){
//         for(j=1; j<=i; j++){
//            printf("%d",j);
//         }
//         printf("\n");
//     }
// }

// 1
// 2       3
// 4       5       6
// 7       8       9       10

// #include<stdio.h>
// int main(){
//     int i,j,n,t;
//     t=1;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++){

//         for(j=1; j<=i; j++){
//            printf("%d\t",t);
//            t++;
//         }
//         printf("\n");
//     }
// }



// 1
// 0       1
// 1       0       1
// 0       1       0       1


// #include<stdio.h>
// int main(){
//     int i,j,n,t;
//     t=1;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++){
//         for(j=1; j<=i; j++){
//            if((i+j)%2 == 0){
//             printf("1\t");
//            }
//            else{
//             printf("0\t");
//            }
//         }
//         printf("\n");
//     }
// }