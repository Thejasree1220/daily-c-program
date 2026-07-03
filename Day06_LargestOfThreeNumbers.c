#include<stdio.h>
void main()
{
  int a,b,c;
printf("enter three numbers:");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d is largest number\n",a);
}
else if(b>a&&b>c)
{
printf("%d is largest number\n",b);
}
else
{
printf("%d is largest number\n",c);
}
