#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int maxi= INT_MIN;
    int mini= INT_MAX;
    for (int i = 0; i < n; i++)
    {
      /*  if (a[i]>maxi)
       {
           maxi=a[i];
           
       }
       if (a[i]<mini)
       {
           mini=a[i];
       } */
       maxi=max(maxi,a[i]);
       mini=min(mini,a[i]);

    }
    cout<<maxi<<" "<<mini;

    
    return 0;
}