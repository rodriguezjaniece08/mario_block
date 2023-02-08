#include <cs50.h>
#include <stdio.h>

int main(void)
{
//propmt the user for a height 
   int n;
   do {
    n = get_int("Height: ");
   }
   while (n < 1 || n > 8);

//iterate through n & print space, # & new line to create steps
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < n - i -1; s++)
        {
            printf(" ");
        }
         printf("\n");   
    }

}

