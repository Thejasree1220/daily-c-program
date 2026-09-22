#include<stdio.h>
void main()
{
        char s[100];
        int i,j,k;
        printf("enter the str:");
        scanf("%[^\n]",s);
        for(i=0;s[i];i++)
        {
                for(j=i+1;s[j];j++)
                {
                        if(s[i]==s[j])
                        {
                                for(k=j;s[k];k++)
                                        s[k]=s[k+1];
                                k--;
                                i--;
                        }
                }
        }
        printf("After deletion:%s\n",s);
}
