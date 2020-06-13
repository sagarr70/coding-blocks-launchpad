#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    float ans=1;
    float inc =1.0;
    int p;
    cin>>p;
    while (p>=0)
    {
    while (ans*ans<=n)
    {
        ans=ans+inc;
    }
    ans=ans-inc;
    inc=inc/10;
    p--;}
    cout<<ans;
    return 0;
}