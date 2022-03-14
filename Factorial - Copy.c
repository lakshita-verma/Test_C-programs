#include <stdio.h>

int main() {
    int i,n,fact=1;
    printf("Enter the number for its factorial:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
        printf("\nThe factorial of a number=%d",fact,n);
    }
    
    return 0;
}