//menu driven program a.addition,.b.subtraction,c.multiplication,d.division:....................................
#include<stdio.h>
int main()

{
    int n,a,b,sum,subtract,multiplication,division,lcm,hcf,max=a|b;
     int ch;
    printf("click 1 for addition\n");
    printf("..............................RAVI KUMAR SINGH.............................................\n");
    printf("click 2 for subtract\n");
    printf("..............................RAVI KUMAR SINGH.............................................\n");
    printf("click 3 for multiplication\n");
    printf("..............................RAVI KUMAR SINGH.............................................\n");
    printf("click 4 for division\n");
    printf("............................. RAVI KUMAR SINGH.............................................\n");
    printf("click 5 for LCM\n");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1: printf(".....................RAVI KUMAR SINGH......................................................\n");
            printf("for addition :enter two number\n");
             scanf("%d%d",&a,&b);
             sum=a+b;
             printf("sum=%d\n",sum);
             break;
   case 2: printf("......................RAVI KUMAR SINGH.....................................................\n");
           printf("for subtract:enter two number\n");
           scanf("%d%d",&a,&b);
           subtract=a-b;
           printf("subtraction=%d\n",subtract);
           break;
  case 3: printf("......................RAVI KUMAR SINGH.....................................................\n");
          printf("for multiplication:enter two number\n");
          scanf("%d%d",&a,&b);
          multiplication=a*b;
          printf("multiplication=%d\n",multiplication);
          break;
  case 4: printf("......................RAVI KUMAR SINGH.....................................................\n");
          printf("for division:enter two number\n");
          scanf("%d%d",&a,&b);
          division=a/b;
          printf("division=%d\n",division);
          break;
 case 5: printf("......................RAVI KUMAR SINGH.....................................................\n");
        printf("for LCM:enter two number\n");
          scanf("%d%d",&a,&b);
          if((a/2)&&(b/2))
           // {
            printf("max value who we feel");
          //  }
          else
          {
          printf("a*b");
          printf("lcm=%d",lcm);}
          break;
 default :
     printf("........................RAVI KUMAR SINGH...................................................\n");
    printf("there are no cases PLEASE I AM SORRY,ICAN NOT HELP YOU");
    }
}
