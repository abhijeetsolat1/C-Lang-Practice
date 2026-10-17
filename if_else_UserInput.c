#include <stdio.h>
int main(void)
{
    int number;
    printf("enter a number");
    scanf("%d",&number);

    if (number > 0)
    {
        printf("positive number");

    }
    else
    {
        printf("negtive number");

    }

    return 0;
}