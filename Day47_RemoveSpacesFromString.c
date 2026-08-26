#include<stdio.h>
void main()
{
        char s[100];
        int i,j;
        printf("enter the string:");
        scanf("%[^\n]",s);
        for(i=0;s[i];i++)
        {
                if(s[i]==' ')
                {
                        for(j=i;s[j];j++)
                                s[j]=s[j+1];
                }
        }
        printf("After removing space:%s\n",s);
}
