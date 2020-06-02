#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = i; j < i*2 ; j++)
        {
        cout<<j;
        }
        j=j-2;
        for (j;j>=i;j--)
        {
          cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}