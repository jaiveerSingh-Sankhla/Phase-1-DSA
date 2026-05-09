#include <iostream>
using namespace std;
// Inheritance Multiple 

class Human
{
    protected:
    string name;
};


class person
{
    protected:
    int age;
};

class Student: public person, public Human
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
