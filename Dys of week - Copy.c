#include <stdio.h>

int main()
{
    int day;
    printf("enter the number of day\n");
    scanf("%d",&day);
    
    switch(day)
    {
        case 1:
        printf("The day is sunday");
        break;
        case 2:
        printf("The day is monday");
        break;
        case 3:
        printf("The day is tuesday");
        break;
        case 4:
        printf("The day is wednesday");
        break;
        case 5:
        printf("The day is thursday");
        break;
        case 6:
        printf("The day is friday");
        break;
        case 7:
        printf("The day is saturday");
        break;
        default:
        printf("no days left");
        break;
        
    }

    return 0;
}
