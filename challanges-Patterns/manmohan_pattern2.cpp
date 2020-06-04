#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"1"<<endl;
    for (int i = 1; i < n; i++)
    { cout<<i;
        for (int j = 2 ;j<=i; j++)
        {
            cout<<"0";
        }
     cout<<i<<endl;   
    }
    
    return 0;
}