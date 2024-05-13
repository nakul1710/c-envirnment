#include<stdio.h>

int main()
{
    int remainder,num,reverse=0,sum =0,count=0;

    printf("enter n:");
    scanf("%d",&num);

    while (num>0)
    {   remainder=num%10;
        num=num/10;
        reverse=reverse*10+remainder;
        sum = sum + remainder;
        count++;

    }
    printf("the sum is :%d\n",remainder);
    printf("the reverse is:%d\n",reverse);
    printf("the number of digits:%d\n",count);

    return 0;
    
    
}