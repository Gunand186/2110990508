#include <iostream>
using namespace std;
class Demo
{
private:
    int length,breadth;
public:
    Demo()
    {
        length =10;
        breadth = 20;
    }
    void area()
    {
        cout<<"length = "<<length<<endl;
        cout<<"breadth = "<<breadth<<endl;
        cout<<"Area of Rectangle with length= "<<length<< " and breadth = "<<breadth<<" is :"<<length*breadth<<endl;
    }
};
int main()
{
    Demo obj;
    obj.area();
    return 0;
}