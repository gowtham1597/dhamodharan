#include <stdio.h>
#include<iostream.h>
int main()
{
    long long n;
    int count = 0;

    cout<<"Enter an integer:";
    cin>>n;

    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }

    cout<<"Number of digits:"<<count;
return 0;
}
