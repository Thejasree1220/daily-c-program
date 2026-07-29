#include<stdio.h>
void main()
{
  int n;
printf("enter the size of an array:");
scanf("%d",&n);
int a[n],b[n],i,j;
printf("enter first array elements:");
for(i=0;i<n;i++)
  scanf("%d",&a[i]);
printf("enter second array elements:");
for(i=0;i<n;i++)
  scanf("%d",&b[i]);
for(i=n,j=0;i<(2*n),j<n;i++,j++)
  a[i]=b[j];
printf("after merging:");
for(i=0;i<(2*n);i++)
  printf("%d ",a[i]);
  printf("\n");
}
