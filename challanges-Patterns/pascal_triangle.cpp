#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space=n;
    for (int i = 0; i < n; i++)
    {for (int k=space; k >0; k--)
        {
            cout<<" ";
        }
        space=space-1;
        int p=1;
        for (int k = 0; k <= i; k++)
        {
            cout<<p<<" ";
           //important
           //print pascal
            p=p*(i-k)/(k+1);
        }
        cout<<endl;
        }
    
    return 0;
}