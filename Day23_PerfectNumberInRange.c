#include <stdio.h>
void main()
{
    int start, end, i, j, sum;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);
    printf("Perfect numbers between %d and %d are:\n", start, end);
    for(i = start; i <= end; i++)
    {
        sum = 0;
        for(j = 1; j <= i / 2; j++)
        {
            if(i % j == 0)
                sum += j;
        }
        if(sum == i && i != 0)
            printf("%d ", i);
    }
  printf("\n");
}
