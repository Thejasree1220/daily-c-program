#include<stdio.h>
void main()
{
	int n;
	printf("enter the size of an array:");
	scanf("%d",&n);
	int a[n],i,s,ss;
	printf("enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	if(a[0]<a[1])
	{
		s=a[0];
		ss=a[1];
	}
	else if(a[0]>a[1])
	{
		s=a[1];
		ss=a[0];
	}
	for(i=2;i<n;i++)
	{
		if(a[i]<s)
		{
			ss=s;
			s=a[i];
		}
		else if(a[i]<ss&&a[i]!=s)
			ss=a[i];
	}
	printf("second smallest element is:%d\n",ss);
}
