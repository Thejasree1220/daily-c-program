#include<stdio.h>
void main()
{
  int a,b;
printf("enter two num:");
scanf("%d %d",&a,&b);
//swaping logic
printf("before swapping\na=%d,b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping\na=%d b=%d\n",a,b);
}
