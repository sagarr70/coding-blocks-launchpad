#include<iostream>
#include<climits>
using namespace std;
int a[1000000];
int lef[1000000];
int righ[1000000];
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi=max(a[i],maxi);
        lef[i]=maxi;
    }
    
    maxi=INT_MIN;
    for (int i = n-1; i >=0; i--)
    {
        maxi=max(a[i],maxi);
        righ[i]=maxi;
    }

    int water=0;
    for (int i = 0; i < n; i++)
    {
        int mini=min(lef[i],righ[i]);
        water+=a[i]-mini;
    }
    cout<<abs(water);
    return 0;
}