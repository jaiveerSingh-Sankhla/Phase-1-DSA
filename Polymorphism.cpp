#include <iostream>
using namespace std;
Sclass Student
{
       string name ;
       int age;
       
       public:
       void setter (string n, int a)
        {
            name=n;
            age=a;
        }
        
        int getter()
        
            { 
                return age;
                
            }
        
        void display()
        {
            cout<<name<" "<< endl;
            
        }
        
            
 };


int main()
{ 
    Student obj1;
    obj1.setter("Aryaman",25);
    cout<<obj1.getter();
}
    
    
  // 
