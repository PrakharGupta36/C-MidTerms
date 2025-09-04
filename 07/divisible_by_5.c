#include <stdio.h>

int main()
{
    int num;

    printf("\nEnter Num : ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("\nThe Number is (%d) divisible by 5\n\n", num);
    }
    else
    {
        printf("\nThe Number is (%d) not divisible by 5\n\n", num);
    }

    return 0;
}