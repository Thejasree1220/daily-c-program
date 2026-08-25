#include<stdio.h>
void main()
{
  char s[100];
  int i,d=0;
  printf("enter the string:");
  scanf("%[^\n]",s);
  for(i=0;s[i];i++)
  {
      if(s[i]>='0'&&s[i]<='9')
        d++;
  }
  printf("digit count is:%d\n",d);
}
