#include<iostream>
#include<climits>
using namespace std;
void maxsumsubarray()
{
   int n;
   cin>>n;
   int a[100000]={0};
   int largest_sum=INT_MIN;
   int curr=0;
   for (int i = 0; i < n; i++)
   {
       cin>>a[i];
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
   
cout<<largest_sum<<endl;


}
int main(){
int t;
cin>>t;
while (t>0)
{
    maxsumsubarray();
    t--;
}

    
    return 0;
}