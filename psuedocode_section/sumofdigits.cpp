#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum =0;
    while (n%10!=n)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    sum=sum+n;
    cout<<sum;
    
    
    return 0;
}