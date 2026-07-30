#include<stdio.h>
void main()
{
  int n;
printf("enter the size of an array:");
scanf("%d",&n);
int a[n],i,even=0,odd=0;
printf("enter the array elements:");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]%2==0)
  even++;
else
  odd++;
}
printf(" even count:%d\n odd even:%d\n",even,odd);
}
