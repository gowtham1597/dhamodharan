#include <stdio.h>
int main()
{
    int n, backInteger = 0, remainder, originalInteger;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalInteger = n; 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = backInteger*10 + remainder;
        n /= 10;
    }
    if (originalInteger == backInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    return 0;
}
