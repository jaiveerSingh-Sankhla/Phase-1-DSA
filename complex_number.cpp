#include <iostream>
using namespace std;
// Polymorphism - Operator Overloading
// complex number formula = real + i<< img//

class Complex// default constructor is called because compiler will not call constructor so user will call it's ow
{
    int real;
    int img;
    
    
    
    
    public:
    Complex()
    {
        
    }
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    
    Complex operator + (Complex &c)
    {

    Complex ans;
    ans.real= real+c.real;
    ans.img= img+c.img;
    return ans;
        
    }
    
    
    void display()
    {
        cout<< real<<"+i"<<img<<endl;
    }
    
    
};
  
   int main()
{ 
    Complex c1(3,4);
    Complex c2(3,5);
    Complex c3=c1+c2; 
                               // c1 is initiating first so original data member will be assigned to c1
    c3.display();
    
    return 0;
}
