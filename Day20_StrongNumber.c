#include <stdio.h>
void main()
{
    int num, original, digit, sum = 0, i, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    for(num;num;num=num/10)
    {
        digit = num % 10;
        fact = 1;
        for(i = 1; i <= digit; i++)
            fact *= i;
        sum += fact;
    }
    if(sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is not a Strong Number.\n", original);
}
