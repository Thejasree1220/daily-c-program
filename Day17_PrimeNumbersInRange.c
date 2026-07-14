#include <stdio.h>
void main()
{
    int start, end, i, j, prime=0;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++)
    {
        prime = 0;

        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                prime++;
            }
        }

        if (prime==2)
            printf("%d ", i);
    }
  printf("\n");
}
