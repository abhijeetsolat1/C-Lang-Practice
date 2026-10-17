#include <stdio.h>
int main(void){
    int number;
    printf("Enter a number :");
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("it is an Even Number");
    }
    else{
        printf("it is an odd number");

    }

    return 0;


}