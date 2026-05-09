#include <iostream>
using namespace std;
// inheritance multilevel LEVEL

class Human
{
    protected:
    string name;
};


class person: public Human
{
    protected:
    int age;
};

class Student: public person
{
    int roll_no;
    public:
    
    Student (string n,int a,int r)
    {
        name= n;
        age=a;
        roll_no= r;
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<< roll_no<<endl;
        
    }
};
  
   int main()
{ 
   Student obj( "Jaiveer", 21, 69);
   obj.display();
}
