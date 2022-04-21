#include <iostream>
using namespace std;

class student
{
    public:
    int rollno;
    void func1(){
        cout<<"Function declared inside the class"<<endl;
    }
    void func2();
};

void student::func2(){
    cout<<"Function declared outside the class ";
}

int main(){

    student Gautam;
    Gautam.rollno=508;
    cout<<"rollno of Gautam is "<<Gautam.rollno<<endl;
    Gautam.func1();
    Gautam.func2();

    return 0;
}