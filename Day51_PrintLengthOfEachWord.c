#include<stdio.h>
void main()
{
        char s[100];
        printf("enter the string:\n");
        scanf("%[^\n]",s);
        int i,w=0;
        printf("lengths of each word is:");
        for(i=0;s[i]!='\0';i++)
        {
                w++;
                if(s[i]==' ')
                {
                        printf("%d ",w-1);
                        w=0;
                }
        }
        printf("%d\n",w);
}
