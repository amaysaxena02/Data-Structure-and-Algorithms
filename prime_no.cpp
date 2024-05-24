#include<iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = 1;

    cout<<"Enter a number to check of it's prime or not: ";
    cin>>n;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isPrime = 0;
            break;
        }
    }

    if( isPrime == 0)
    {
        cout<<"Entered number is not Prime.";
    }
    else
    {
        cout<<"Entered number is Prime.";
    }

    return 0;
}