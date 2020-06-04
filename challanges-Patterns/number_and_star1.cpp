#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int star=1;
    for (int i = n; i > 0; i--)
    {
        for (int k = 1; k<=i; k++)
        {
            cout<<k<<" ";
        }
        if (i!=n)
        {
           for (int k = 0; k < star; k++)
           {
               cout<<"* ";
           }
           star=star+2;
        }
        cout<<endl;
        
    }
    
    return 0;
}