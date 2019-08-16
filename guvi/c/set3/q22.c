 #include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,size,max,location=1;
    printf("enter the number of elements in array");
    scanf("%d",&size);
    printf("enter the elements");
    scanf("%d",&a[i]);
    for (i= 0; i < size; i++)
    scanf("%d", &a[i]);
 
  max= a[0];
 
  for (i= 1; i < size; i++)
  {
    if (a[i] >max)
    {
       max  = a[i];
       location = i+1;
    }
        printf("max element value is %d.\n", location, max);
    }getch();

}
