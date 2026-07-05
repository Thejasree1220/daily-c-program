#include<stdio.h>
void main()
{
  int num1,num2;
char op;
printf("enter first number:");
scanf("%d",&num1);
printf("enter the op:+,-,*,/\n");
scanf("%c",&op);
printf("enter the second number:");
scanf("%d",&num2);
switch(op)
{
case '+':printf("Result=%d\n",num1+num2);
break;
case '-':printf("Result=%d\n",num1-num2);
break;
case '*':printf("Result=%d\n",num1*num2);
break;
case '/':if(num2!=0)
  printf("Result=%d\n",num1/num2);
  else
    printf("Division by zero is not allowed\n");
  break;
default:printf("Invalid Operation\n");
break;
}
}
