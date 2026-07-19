#include <stdio.h>
void main()
{
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    if(sum == num)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);
}
