#include<stdio.h>
void main()
{
  int i,n;
printf("enter the size of an array:");
scanf("%d",&n);
int a[n],smallest;
printf("enter the array elements:");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
smallest=a[0];
for(i=1;i<n;i++)
  if(smallest>a[i])
    smallest=a[i];
printf("smallest element is:%d\n",smallest);
}
