#include <stdio.h>
void main()
{
    int num, i, prime=0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                prime++;
            }
        }
    }
    if (Prime==2)
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is not a Prime Number.\n", num);
}
