#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool compare(string a, string b)
{ if (a.length()==b.length())
{
    return a>b;
}
  return a.length()>b.length();
}
int main(){
    int n;
    cin>>n;
    cin.get();
    string a[100];
    for (int i = 0; i < n; i++)
    {
    getline(cin,a[i]);
    }
    sort(a,a+n,compare);
    
     for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    } 
    return 0;
}