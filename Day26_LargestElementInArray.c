#include<stdio.h>
void main()
{
int n;
printf("enter the size of an array:");
scanf("%d",&n);
  int i,large=0,a[n];
printf("enter the array ele:");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]>large)
  large=a[i];
}
printf("largest element in an array is:%d\n",large);
}
