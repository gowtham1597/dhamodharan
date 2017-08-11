#include <stdio.h>
int main()
{
    int j, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&j);
    for(i=2; i<=j/2; ++i)
    {
        if(j%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    return 0;
}
