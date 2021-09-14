#include<stdio.h>

void main ()
{
    int numb;
    printf ("Enter the number for deciding food\n");
    scanf("%d",&numb);
    printf("\n 1:Pizza=239\n 2:Burger=129\n 3:Pasta=179\n 4:french fries=99\n 5:sandwitch=149\n");
    switch (numb)
    {
        case 1: printf("Food item is Pizza\n price is 239\n");
            break;
        case 2: printf("Food item is Burger\n Price is 129\n");
            break;
        case 3: printf("Food item is Pasta\n Price is 179\n");
            break;
        case 4 : printf("Food item is French Fries\n Price is 99\n ");
            break;
        case 5: printf ("Food item is Sandwitch\n Price is 149\n");
            break;
            default : printf ("Invalid number for food item selection");
    }

}
