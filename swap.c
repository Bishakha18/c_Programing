#include<stdio.h>
void main ()
{
    int a=5,b=10;
    printf ("the number before swaping is a=%d \n b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nthe numbers after swaping is a=%d \n b=%d",a,b);
}
