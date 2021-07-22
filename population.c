#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    int n = start;
    int years = 0;
    
    if (start == end)
    {
        printf("Years: 0\n");
    
    }
    
    do
    {
        n = n + (n / 3) - (n / 4);
        years++;
    }
    while (n < end);
    
    // TODO: Print number of years
    printf("Years: %i\n", years);
    
}
