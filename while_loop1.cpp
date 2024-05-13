#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    int i = 1;
    cout << "Enter a number: ";
    cin >> n;
    while (i < n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << "\nSum of all even numbers between 0 and '" << n << "' is: " << sum;
    return 0;
}
