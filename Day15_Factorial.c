#include <stdio.h>
void main()
{
    int num, i;
    long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", num, factorial);
    }
}
