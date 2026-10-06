#include<stdio.h>
int main()
{
int a,b,choice,res;
printf("===== OPERATORS AND EXPRESSIONS =====\n");
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
printf("\n-----MENU-----\n)");
printf("1.addition\n");
printf("2.subtraction\n");
printf("3.multiplication\n");
printf("4.division\n");
printf("5.modulas\n");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
  case 1:
    res=a+b;
    printf("result = %d",res);
    break;
  case 2:
    res=a-b;
    printf("result = %d",res);
    break;
  case 3:
   res = a*b;
   printf("result = %d",res);
   break;
  case 4:
    if(b!=0)
    {
    res = a/b;
    printf("result = %d",res);
    }
    else
    {
    printf("division by zero is not possible.");
    }
    break;
  case 5:
    if(b!=0)
    {
    res = a%b;
     printf("result=%d",res);
    }
    else
    {
     printf("modulas by zero is not possible.");
    }
    break;
   default:
     printf("invalid choice.");
   }
   return 0;
}
