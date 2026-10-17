#include <stdio.h>

int main(void)
{
    int command;

    printf("Enter command (1, 2, 3 or 4): ");
    scanf("%d", &command);

    switch (command)
    {
        case 1:
            printf("Start motor\n");
            break;

        case 2:
            printf("Stop Motor\n");
            break;

        case 3:
            printf("Reverse Motor\n");
            break;

        default:
            printf("Invalid command\n");
    }

    return 0;
}