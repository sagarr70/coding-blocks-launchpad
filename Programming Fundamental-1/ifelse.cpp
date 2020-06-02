//program to check if number is divisible by 2, div by 3 and both
// if else-if else
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if (n%2==0 && n%3==0)
    {
        cout<<"divisible by both 2 & 3"<<endl;
   
    }
    else
    {
        if (n%2==0)
        {
            cout<<"only divisible by 2"<<endl;

        }
        else
        {
            if (n%3==0)
            {
                cout<<"only divisible by 3"<<endl;
            }
            else
            {
                cout<<"not divisible by any"<<endl;
            }
            
            
        }
        
        
    }
    
    
    return 0;
}