#include<stdio.h>
int main( )
{

int a, b, result, choice;
printf(“Enter first number \n”);
scanf(“%d”,&a);
printf(”Enter second number\n”);
scanf(“%d”,&b);
printf(“Enter 1 for addition or 2 for multiplication or 3 for subtraction and 4 for division\n”);
scanf(“%d”,&choice);
if(choice==1)
result=a+b;
printf("The addition of the no. is =%d",result);
else if(choice==2)
result=a*b;
printf("The multiplication of the two numbers is =%d",result);
else if(choice==3)
result=a-b;
printf("The subtraction of the two numbers is =%d",result);
else if(choice==4)
result=a/b;
printf("The division of the two numbers is =%d",result);

return 0;

}
