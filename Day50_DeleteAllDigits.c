#include<stdio.h>
void main()
{
        char s[100];
        int i,k;
        printf("enter the str:");
        scanf("%[^\n]",s);
        for(i=0;s[i];i++)
        {
                        if(s[i]>='0'&&s[i]<='9')
                        {
                                for(k=i;s[k];k++)
                                        s[k]=s[k+1];
                                k--;
                                i--;

                        }
        }
        printf("After deletion:%s\n",s);
}
