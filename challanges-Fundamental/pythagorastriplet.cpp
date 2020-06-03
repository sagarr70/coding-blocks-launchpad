#include<iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    if (n<3)
    {
        cout<<"-1";
    }
    else
    {
        if (n%2==0)
        {
            cout<<((n*n)-4)/4<<" "<<((n*n)+4)/4;
        }
        else
        {
            cout<<((n*n)-1)/2<<" "<<((n*n)+1)/2;
        }
        
        
    }
    
    
    
    

    return 0;
}