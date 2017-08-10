#include <stdio.h>
int main()
{
    int j, i, sum = 0; 
    printf("Enter a positive integer: ");
    scanf("%d",&j);
    for(i=1; i <= j; ++i)
    {
        sum += i;  
    }
    printf("Sum = %d",sum);
    return 0;
}
