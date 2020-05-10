#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: \n");
        // condition to looping if n bigger than 8
        while (n > 8) 
        {
            n = get_int("Height: \n");
        }
    }
    while (n < 1);

    for (int k = 0; k < n; k++) 
    {
        for (int j = n - 1; j > k ; j--) 
        {
            printf(" ");
        }  
        // j = 0, k = 3 blocks
        for (int j = 0; j <= k; j++)
        {   
            printf("#");         
        }
        // how many spaces you want?
        printf("  ");
        // normal shape
        for (int j = 0; j <= k; j++)
        {   
            printf("#");         
        }              
        printf("\n"); 
    }
}
