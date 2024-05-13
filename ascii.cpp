#include<iostream>
using namespace std;
int main()
{
    string a;
    cout << "\n Enter a character which should be either a single number or a lower/upper case character: ";
    cin >> a;
    for ( int i = 0; i < a.length(); i++ )
    {
        cout << "\n ASCII value of entered character " << a[i] << " is: " << (int)a[i];
    }
    return 0;
}