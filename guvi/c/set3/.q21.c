#include<stdio.h>
#include<conio.h>
void main()
{
    int a,d,n,i,tn,sum=0;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter total number of elements in series");
    scanf("%d",&n);
    printf("enter the difference");
    scanf("%d",&d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     tn = a + (n - 1) * d;
     printf("sum");
     for(i=a;i<=tn;i=i+d)
     {
         if(i!=tn)
         printf("%d + ", i);
         else
         printf("%d = %d ", i, sum);
         
     }
     getch();
}
