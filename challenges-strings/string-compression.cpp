#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    int count=1;
    cout<<a[0];
    for (int i = 1; i < a.length(); i++)
    {
      if (a[i]==a[i-1])
      {
          count++;
      }
      else
      {
          cout<<count;
          cout<<a[i];
          count=1;
      }
    }
    cout<<count;
    return 0;
}