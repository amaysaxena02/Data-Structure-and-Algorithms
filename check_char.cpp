#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter a chareacter which is a single number or an upper/lower case cahracter: ";
    cin>>ch;
    if( ch>=48 && ch<=57 )
    {
        cout<<"\n Entered character '"<<ch<<"' is a Number.";
    }
    else if( ch>=65 && ch<=90 )
    {
        cout<<"\n Entered character '"<<ch<<"' is a Uppercase.";
    }
    else if( ch>=97 && ch<=122 )
    {
        cout<<"\n Entered character '"<<ch<<"' is a Lowercase.";
    }

    return 0;
}