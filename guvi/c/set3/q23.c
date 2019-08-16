#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,size,min,location=1;
printf("enter the number of elements in array");
scanf("%d",&size);
printf("enter the elements:");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
min=a[0];
for(i=1;i<size;i++)
{
if(a[i]<min)
{
min=a[i];
location=i+1;
}
printf("min element value is%d",location,min);
}
getch();
}
