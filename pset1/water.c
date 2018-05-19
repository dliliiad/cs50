#include <stdio.h>
#include <cs50.h>

int main(void)
{

    // do{

    printf("I have spent: ");
    int min = get_int();

    // }
    // while(min > 0)
    // {
         if(min > 0)
        {

        int bottles = min*12;//((min * 1,5) * 128) / 16;

        printf("I have spent: %i of bottles !\n", bottles);

        }
        else
        {

        printf("Get lost or give me positive int!\n");

        }

    // }
}
