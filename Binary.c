#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 

int main()
{
    int num, ones, i;
    printf("Enter any number: ");
    scanf("%d", &num);

    ones = 0;

    for(i=0; i<INT_SIZE; i++)
    {
        if(num & 1)
            ones++;
        
        num >>= 1;
    }
    printf("Total no of 1's bit is %d", ones);

    return 0;
}
