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

}

