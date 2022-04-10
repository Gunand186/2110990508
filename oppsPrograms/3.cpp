// Shop will give discount of 10% if the cost quantity is greater than 1000, print total cost.

#include <iostream>
using namespace std;

int main()
{
    int cost;
    cout<< "enter the cost.";
    cin>> cost;
    if (cost>1000)
    {
        cost=cost-0.1*cost;
        cout<< cost;
    }
    else{
        cout<<cost;
    }
    return 0;
}
