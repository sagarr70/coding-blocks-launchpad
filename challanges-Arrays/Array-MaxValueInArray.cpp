#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100];
    int greatest=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        greatest=max(a[i],greatest);
    }
   cout<<greatest;

    
    return 0;
}