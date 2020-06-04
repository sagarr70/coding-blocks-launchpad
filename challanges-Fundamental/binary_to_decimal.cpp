#include<iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    int i=0;
    int ans=0;
    while (n>0)
    {
        ans= ans + (n%10<<i);
        i++;
        n=n/10;
    }
    cout<<ans;
    return 0;
}