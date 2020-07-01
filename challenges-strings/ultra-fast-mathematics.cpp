#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        string a,b;
        cin>>a;
        cin>>b;
        for (int i = 0; i < a.length(); i++)
        {
            cout<<((a[i]-'0')^(b[i]-'0'));//xor
        }
        
        cout<<endl;
    }
    
    return 0;
}