#include <stdio.h>

int main()
{
    int num;

    printf("\nEnter Num : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("\nThe Number is (%d) is even\n\n", num);
    }
    else
    {
        printf("\nThe Number is (%d) is odd\n\n", num);
    }

    return 0;
}