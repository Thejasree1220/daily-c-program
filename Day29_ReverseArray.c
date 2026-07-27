#include<stdio.h>
void main()
{
  int n;
printf("enter the size of an array:");
scanf("%d",&n);
int a[n],i;
printf("enter the array ele:");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
printf("reverse of an array is: ");
for(i=n-1;i>=0;i--)
  printf("%d ",a[i]);
printf("\n");
}
