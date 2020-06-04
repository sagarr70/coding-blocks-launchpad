#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"* ";
    }
    cout<<endl;
    int space  =1;
    for (int i = n/2; i >0 ; i--)
    {
        for (int k  = i; k >0; k--)
        {
            cout<<"* ";
        }
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        space=space+2;
        for (int k  = i; k >0; k--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    space=space-4;
    int star=2;    
    for (int i = 1; i < n/2; i++)
    {
        for (int k =0 ; k<star ;k++)
        {
            cout<<"* ";
        }
        
        for (int k = 0; k < space; k++)
        {
            cout<<"  ";
        }
        for (int k =0 ; k<star ;k++)
        {
            cout<<"* ";
        }
        star=star+1;
        space=space-2;
        cout<<endl;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"* ";
    }
    return 0;
}