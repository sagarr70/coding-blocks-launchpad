#include<iostream>
#include<climits>
using namespace std;
void maxcircular()
{
    int n;
    cin>>n;
    int a[10000]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int largest_sum=INT_MIN;
    int  curr=0;
    int k=0;
    int maxsum=INT_MIN;
    while (k<n)
    { 
    for ( int i=k ; i < n; i++)
    {
        if (curr+a[i]>=0)
       {
           curr+=a[i];
       }
       else
       {
           curr=0;
       }
       largest_sum=max(curr,largest_sum);
    }
    if (k!=0)
    {
        for ( int i=0 ; i < k; i++)
    {
        if (curr+a[i]>=0)
       {
           curr+=a[i];
       }
       else
       {
           curr=0;
       }
       largest_sum=max(curr,largest_sum);
    }
    }
    maxsum=max(largest_sum,maxsum);
    largest_sum=INT_MIN;
    curr=0;
    k++;
    }
    cout<<maxsum<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        maxcircular();
        t--;
    }
    
    return 0;
}