#include <stdio.h>

int main(void)
{
    int command = -1;

    while (command != 0)
    {
        printf("1.Start motor\n2.Stop motor\n3.Reverse Motor\n 0.exit\n");
        printf("Enter your command : ");

        if(scanf("%i",&command) != 1){
            printf("invalid command \n only integers are allowed");
            return 0;
        }
    

        switch (command)
        {
            case 1:
        printf("Start motor\n");
        break;

            case 2:
        printf("Stop motor\n");
        break;
            
        
           case 3:
        printf("reverse motor\n");
        break;

            case 0:
        printf("exit\n");
        break;    


            default:
        printf("invalid command\n");
        break;



        }
    }

    return 0;
}