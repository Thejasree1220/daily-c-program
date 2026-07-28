#include<stdio.h>
void main()
{
  int n;
printf("enter the size of an array:");
scanf("%d",&n);
int a[n],b[n],i;
printf("enter the array ele:");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
    b[i]=a[i];
printf("printing the element after copying:");
for(i=0;i<n;i++)
  printf("%d ",&b[i]);
printf("\n");
}
