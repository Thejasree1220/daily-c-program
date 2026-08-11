#include<stdio.h>
void main()
{
  int n;
printf("enter the size of an array:");
scanf("%d",&n);
int a[n],i,l,sl;
  printf("enter the array elements:");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
if(a[0]>a[1])
{
l=a[0];
sl=a[1];
}
else if(a[0]<a[1])
{
l=a[1];
sl=a[0];
}
for(i=2;i<n;i++)
{
if(a[i]>l)
{
sl=l;
l=a[i];
}
else if(a[i]>sl&&a[i]!=l)
  sl=a[i];
}
printf("second largest element is:%d\n",sl);
}
