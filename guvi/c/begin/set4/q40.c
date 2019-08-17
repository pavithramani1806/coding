#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,i,terms;
    printf("enter no of terms");
    scanf("%d",&terms);
    a=0;
    b=1;
    c=0;
    printf("fibonacci terms: ");
    for(i=1;i<=terms;i++)
    {
        printf("%d",c);
        a=b;
        b=c;
        c=a+b;
        
        
    }
}
