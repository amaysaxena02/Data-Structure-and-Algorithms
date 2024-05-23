#include<iostream>
using namespace std;

int main()
{
    int a=1,b=2;

    if (a-- > 0 || ++b > 2)
    {
        cout<<"Stage1 - Inside IF";
    }
    else
    {
        cout<<"Stage2 - Inside ELSE";
    }

    return 0;
}
//a have post decrement which means a will change after the statement executes so it will have its original value when if statement gets executed.
//b have pre increment which means its value will increase while the if statement gets executes.
//due to these operations, if condition satisfies and we get output from if block.