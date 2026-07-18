#include <stdio.h>
void main()
{
    int num, digit, product=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(num;num;num=num/10)
    {
        digit = num % 10;
        product *= digit;
    }
    printf("Product of digits = %d\n", product);
}
