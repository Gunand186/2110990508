#include <iostream>
using namespace std;

class Student
{
    string name;
public:
    Student(string s)
    {
        name = s;
    }
    Student()
    {
        name = "Unknown";
    }
    void print_name()
    {
        cout << name << endl;
    }
    
    Student() {
      cout<<"object destroyed"<<endl;
   }
};

int main()
{
    Student s1("Gautam");
    Student s2;
    s1.print_name();
    s2.print_name();
    return 0;
}