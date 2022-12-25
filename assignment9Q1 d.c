//program of switch case to print months with its name.......................................
#include<stdio.h>
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
switch(n)
{
    case 1: printf("THIS IS JANUARY MONTH \n");
            break;
    case 2: printf("THIS IS FEBRARY MONTH \n");
            break;
    case 3: printf("THIS IS MARCH MONTH \n");
            break;
    case 4: printf("THIS IS APRIL MONTH \n");
            break;
    case 5: printf("THIS IS MAY MONTH \n");
            break;
    case 6: printf("THIS IS JUNE MONTH \n");
            break;
    case 7: printf("THIS IS JULEY MONTH \n");
            break;
    case 8: printf("THIS IS AUGUST MONTH \n");
            break;
    case 9: printf("THIS IS SEPTMBER MONTH \n");
            break;
    case 10: printf("THIS IS OCTOBER MONTH \n");
            break;
    case 11: printf("THIS IS NOVEMBER MONTH \n") ;
            break;
    case 12: printf("THIS IS DECEMBER MONTH \n");
            break;
     default:
             printf("invalid number");
    }
}
