#include <stdio.h>

int main()
{
    int num;

    printf("\nEnter Num : ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("\nThe Number is (%d) is -ve\n\n", num);
    }
    else
    {
        printf("\nThe Number is (%d) is +ve\n\n", num);
    }

    return 0;
}