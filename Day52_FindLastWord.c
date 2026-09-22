#include<stdio.h>
void main()
{
        char s[100];
        printf("enter the string:\n");
        scanf("%[^\n]",s);
        int i,p,q;
        for(i=0;s[i];i++)
        {
                if(s[i]==' ')
                        p=i+1;
        }
        q=i-1;
        printf("last word: ");
        for(p;p<=q;p++)
                printf("%c",s[p]);
        printf("\n");
}
