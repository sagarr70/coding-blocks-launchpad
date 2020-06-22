#include<iostream>
#include<algorithm>
using namespace std;
void pairsum(int a[],int target,int n)
{
  int i=0;
  int j=n-1;
  while (i<j)
  {
   if ((a[i]+a[j])==target)
   {
       cout<<a[i]<<" and "<<a[j]<<endl;
       i++;j--;
   }
   else
   {
       if (a[i]+a[j]<target)
       {
           i++;
       }
       else
       {
           j--;
       }
   }
  }
}
int main(){
    int n;
    cin>>n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int target;
    cin>>target;
    sort(a,a+n);
    pairsum(a,target,n); 
    return 0;
}