#include <stdio.h>

int main()
{
   int num;
   printf("enter a number:");
   scanf("%d",&num);
   if(num%2==0)
    printf("%d is even",num);
    else if(num!=0)
    printf("%d is odd",num);
    else
    printf("%d is invalid",num);
}
