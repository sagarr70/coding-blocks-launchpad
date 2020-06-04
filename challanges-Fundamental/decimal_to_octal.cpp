#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=1;
    while (n!=0)
    { 
        ans= ans+ i*(n%8);
        i=i*10;
        n=n/8;
    }
    cout<<ans;
    return 0;
}