#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    for (int i = 0; i < s.length()-1; i++)
    {
        int diff=s[i+1]-s[i];
        cout<<s[i]<<diff;
    }
    cout<<s[s.length()-1];
    return 0;
}