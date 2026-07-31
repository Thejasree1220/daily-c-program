#include<stdio.h>
void main()
{
  int n;
printf("enter the size of an array:");
scanf("%d",&n);
int a[n],i,j,k;
printf("enter the array elements:");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
if(a[i]==a[j])
{
  printf("%d ",a[j]);
  j--;
}
}
printf("\n");
}
