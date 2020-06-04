#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space =n-1;
    int oddspace=1;
   
        for (int j = 1; j <= (n/2)+1; j++)
        {
            for (int k = 0; k < space; k++)
            {
                cout<<"  ";
            }
            space=space-2;
            for (int k = j; k >0; k--)
            {
                cout<<k<<" ";
            }
            if (j>=2)
            {
            for (int k = 0; k <oddspace; k++)
            {
                cout<<"  ";
            }
            oddspace=oddspace+2;
            for (int k = 1; k <= j; k++)
            {
                cout<<k<<" ";
            }
            
            }
            

            cout<<endl;
        }
space=space+4;
oddspace=oddspace-4;
for (int i = n/2; i >0; i--)
{
    for (int k = 0; k < space; k++)
    {
        cout<<"  ";
    }
    space=space+2;
    for (int k = i; k >0; k--)
    {
        cout<<k<<" ";
    }
    for (int k = 0; k < oddspace; k++)
    {
        cout<<"  ";
    }
    oddspace-=2;
    if (i!=1)
    {
    for (int k = 1; k <= i; k++)
    {
        cout<<k<<" ";
    }
    }
    cout<<endl;
}


    
    return 0;
}