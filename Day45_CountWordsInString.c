#include<stdio.h>
void main()
{
        char s[100];
        int i,w=0;
        printf("enter the string:");
        scanf("%[^\n]",s);
        for(i=0;s[i];i++)
        {
                if(s[i]==' ')
                        w++;
        }
        if(s[i]=='\0')
                w++;
        printf("word count is:%d\n",w);
}
