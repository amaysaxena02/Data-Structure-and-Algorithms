#include<iostream>
using namespace std;
 
int main()
{
    //">>" means right shift operator and "<<" means left shitf operator
    
    //in left shit the (value) is shifted to the left (<<) by the number of times written at the end (times): (value<<times)
    cout<<(17>>1)<<endl;
    cout<<(20>>2)<<endl;
    
    //in right shit the (value) is shifted to the right (>>) by the number of times written at the end (times): (value>>times)
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

    return 0;
}