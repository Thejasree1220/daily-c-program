 #include<stdio.h>
   void main()
   {
           int n,i,sum=0;
           printf("size of an array:");
           scanf("%d",&n);
           int a[n];
           printf("enter the elements:");
           for(i=0;i<n;i++)
                  scanf("%d",&a[i]);
          for(i=0;i<n;i++)
                  sum=sum+a[i];
          printf("array of sum=%d\n",sum);
  }
