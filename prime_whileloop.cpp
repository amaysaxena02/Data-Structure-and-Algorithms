#include<iostream>
using namespace std;
int main()
{
    int n;
    int i=2;
    cout<<"Enter your number: ";
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"\nEntered number is not prime for "<<i;
        }
        else
        {
            cout<<"\nEntered number is prime for "<<i;
        }
        i++;
    }
    return 0;
}