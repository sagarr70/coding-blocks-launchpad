#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100]={0};
    int cursum=0;
    int maxsum=INT_MIN;
    for (int i = 0; i<n; i++)
    {
       cin>>a[i];
       (cursum+a[i])<0?cursum=0:cursum+=a[i];
       maxsum=max(cursum,maxsum);
    }
    cout<<maxsum;
    
    return 0;
}