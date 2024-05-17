#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}