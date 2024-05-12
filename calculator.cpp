#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"\n Enter two numbers: ";
    cin>>a>>b;
    cout<<"\n Enter operator: ";
    cin>>op;
    switch (op)
    {
    case '+':
    cout<<a<<"+"<<b<<"="<<a+b;
    break;

    case '-':
    cout<<a<<"-"<<b<<"="<<a-b;
    break;

    case '*':
    cout<<a<<"*"<<b<<"="<<a*b;
    break;

    case '/':
    cout<<a<<"/"<<b<<"="<<a/b;
    break;

    case '%':
    cout<<a<<"%"<<b<<"="<<a%b;
    break;

    default:
    cout<<"\n Enter a valid operator!";
    break;
    }
   return 0; 
}