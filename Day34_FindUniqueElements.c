 #include <stdio.h>
  void main()
  {
           int a[100], n, i, j, count;
           printf("Enter number of elements: ");
           scanf("%d", &n);
           printf("Enter elements:\n");
           for(i = 0; i < n; i++)
                   scanf("%d", &a[i]);
          printf("Unique elements: ");
          for(i = 0; i < n; i++)
          {
                  count = 0;
                  for(j = 0; j < n; j++)
                  {
                          if(a[i] == a[j])
                                  count++;
                  }
  
                  if(count == 1)
                          printf("%d ", a[i]);
          }
          printf("\n");
 }
