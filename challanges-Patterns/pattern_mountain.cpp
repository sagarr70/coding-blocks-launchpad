#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space = (2*n)-3;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j<<"  ";
        }
        for (int j = 1; j <=space ; j++)
        {
            cout<<"   ";
        }
        space=space-2;
        if (i!=n)
        {
        for (int j = i; j >=1; j--)
        {
            cout<<j<<"  ";
        }
        }
        else
        {
            for (int j = n-1; j >=1; j--)
            {
                cout<<j<<"  ";
            }
            
        }
        
        
        

        cout<<endl;
        
    }
    


    return 0;
}