#include<stdio.h>
void main()
{
        char s[100];
        int len,i,j;
        printf("enter the string:");
        scanf("%[^\n]",s);
        //we can do in two ways
        //1'st way
        for(len=0;s[len];len++);
        printf("%d\n",len);
        for(i=len-1;i>=0;i--)
                printf("%c",s[i]);
        printf("\n");
        //2'nd way
        char temp;
        for(i=0,j=len-1;i<j;i++,j--)
        {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
        }
        printf("%s\n",s);
}
