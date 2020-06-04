#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space=(n*2)-1;
    int l=0;
    for (int i = n; i >= 0; i--)
    {
        for (int k = n; k >=i; k--)
        {
            cout<<k<<" ";
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        space=space-2;
        for (int k = n-l; k <=n ; k++)
        {
            if (k!=0)
              {cout<<k<<" ";}
        }
        l+=1;
        
        cout<<endl;
    }
   space=space+4;
    for (int i = 1; i <=n; i++)
    {
        for (int k = n; k >=i; k--)
        {
            cout<<k<<" ";
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        space+=2; 
       for (int k = i; k <=n; k++)
       {
         cout<<k<<" ";
       }
       cout<<endl;

    }
    
    return 0;
}