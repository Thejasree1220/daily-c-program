#include <stdio.h>
void main()
{
    int num, sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num < 0)
        num = -num;
    while(num != 0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    printf("Sum of digits = %d", sum);
}
