#include<stdio.h>
void main()
{
        char s[100];
        int i;
        printf("enter the string:");
        scanf("%[^\n]",s);
        for(i=0;s[i];i++)
        {
                if(s[i]>='a'&&s[i]<='z')
                        s[i]=s[i]-32;
        }
        printf("after conversion:%s\n",s);
}
