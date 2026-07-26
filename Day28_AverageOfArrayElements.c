#include<stdio.h>
void main()
{
  int n;
printf("enter the size of an array:");
scanf("%d",&n);
int a[n],i,average,sum=0;
printf("enter the array elements:");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
for(i=0;i<n;i++)
  sum+=a[i];
average=sum/n;
printf("average of array elements is:%d\n",average);
}

