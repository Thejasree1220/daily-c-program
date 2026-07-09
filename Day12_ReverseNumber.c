#include <stdio.h>
void main()
{
    int num, reverse = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    printf("Reversed number = %d", reverse);
}
