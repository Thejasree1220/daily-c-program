#include<stdio.h>
void main()
{
        char s[100];
        printf("enter the string:");
        scanf("%s",s);//it is only for single word
        /*If you wants to scan multiple words
          you can use
          scanf("%[^\n]",s);
          */
        printf("given string is:%s\n",s);
}
