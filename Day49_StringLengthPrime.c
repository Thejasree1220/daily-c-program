#include<stdio.h>
void main()
{
  char s[100];
int i,len,c=0;
printf("enter the string:");
scanf("%[^\n]",s);
for(len=0;s[len];len++);
printf("string length = %d\n",len);
for(i=1;i<=len;i++)
{
if(len%i==0)
  c++;
}
if(c==2)
  printf("%d is a prime number\n",len);
else
   printf("%d is not a prime number\n",len);
}
