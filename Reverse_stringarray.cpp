#include <iostream>
using namespace std;

int main() 
{
    string arr[3]={"abc","def","ghi"};
    int i=0,j=2;
    while( i<=j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int k=0;k<=2; k++)
    {
        cout<< arr[k]<<" ";
    }
        
}
