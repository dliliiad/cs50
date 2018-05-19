#include <stdio.h>
#include <cs50.h>

int main(void)
{
	// Declare and intialize variables
	int pyramid_height = 0;

	// Grab user input, check it and ask for retry if not within bounds
	do {
		printf("Height:");
		pyramid_height = get_int();
        if (pyramid_height == 0)
        {
            return 0;
        }
	} while (pyramid_height < 1 || pyramid_height > 23);

	/*
		The outer loop handles the count of rows to print.
		The inner loops are responsible for printing the correct number of
		spaces and hashes. The first of the two inner loop handles spaces
        It takes the value of the loop counter form the outer loop
		plus 2 as border value since we starting the pyramid with 2 blocks;
	*/
	for(int i = -1; i < pyramid_height-1; i++)
	{
		// Print the required spaces
        for(int j = 0; j < pyramid_height-i-1; j++)
        {
            printf("%s", " ");
        }
        // Print the '#' character.
		for(int k = 0; k < i+2; k++)
		{
			printf("#");
		}
		// Print the required spaces
        //for(int j = 0; j < pyramid_height-i-1; j++)
         for(int l=1;l<pyramid_height;l++)
        {
            printf("%s", " ");
        }
         // Print the '#' character.
		for(int kk = 0; kk < i+2; kk++)
		{
			printf("#");
		}
		printf("\n");
	}

	return 0;
}