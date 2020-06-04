#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = n; i > 0; i--)
    {
        for (int k = i-1; k>0; k--)
        {
            cout<<" ";
        }
        if (i==n||i==1)
        {
            for (int k = 0; k < n; k++)
            {
                cout<<"*";
            } 
        }
        else
        {
            cout<<"*";
            for (int k = 1; k <= n-2; k++)
            {
                cout<<" ";
            }
            cout<<"*";
            
        }
        cout<<endl;
    }
    
    return 0;
}