#include<iostream>
using namespace std;
int main(){
    //Insertion sort
    int n = 5;
    int arr [5] = {5,4,3,2,1};
    for(int i = 1; i<=n-1;i++)
    {
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}
