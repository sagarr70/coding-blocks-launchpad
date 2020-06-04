#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag=0;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {   flag=1;
            cout<<"Not Prime";
            break;
        }
        
    }
    if (flag==0)
    {
        cout<<"Prime";
    }
    
    return 0;
}