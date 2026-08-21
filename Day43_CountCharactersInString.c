#include<stdio.h>
void main()
{
        char s[100];
        int v=0,i;
        printf("enter the string:");
        scanf("%[^\n]",s);
        for(i=0;s[i];i++)
        {
                if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
                        v++;
        }
        printf("count of vowels is:%d\n",v);
}
