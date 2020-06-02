//sqaure root of no. without using predefined function
//brute force approch
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    float ans=0;
    float inc =1.0;
    //repeating for p precisions
    for (int i = 0; i <=p; i++)
    {
    
    while (ans*ans<=n)
    {
       ans=ans+inc;
    }
    ans=ans-inc;
    inc=inc/10;
    }
     cout<<ans;

    return 0;
}