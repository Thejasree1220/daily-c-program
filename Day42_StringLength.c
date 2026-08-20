#include<stdio.h>
void main()
{
  char s[100];
int len;
printf("enter the string:");
scanf("%[^\n]",s);
for(len=0;s[len];len++);
printf("length of the string is:%d\n",len);
}
