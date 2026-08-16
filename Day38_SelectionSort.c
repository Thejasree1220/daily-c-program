#include <stdio.h>
void main()
{
    int a[100], n, i, j, min, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
  printf("\n");
}
