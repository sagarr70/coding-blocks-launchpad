#include<iostream>
using namespace std;
//problem - unique number 2N+1
// Given a list of numbers where every number occurs twice except one , find the unique number
int main(){
    int n;
    cin>>n;
    int n1 ;
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        cin>>n1;
        ans=ans^n1;
    }

    cout<<ans;
    return 0;
}