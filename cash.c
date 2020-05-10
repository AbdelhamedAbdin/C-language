# include <cs50.h>
# include <stdio.h>
# include <math.h>

int main(void) 
{
    int pennies   = 1;
    int nickels   = 5;
    int dimes     = 10;
    int quarter   = 25;
    int counter   = 0;

    float n;
    do
    {
        n = get_float("Change: ");
    }
    while (n < 0);

    n = round(n * 100);

    while (n >= quarter) 
    {
        n = n - quarter;
        counter++;
    }
    while (n >= dimes)
    {
        n = n - dimes;
        counter++;
    }
    while (n >= nickels) 
    {
        n = n - nickels;
        counter++;
    }
    while (n >= pennies)
    {
        n = n - pennies;
        counter++;
    }
    printf("%i\n", counter);
}
