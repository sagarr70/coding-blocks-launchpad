#include<iostream>
#include<math.h>
#include<climits>
using namespace std;
void maxlengthbitonic()
{
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
      cin>>a[i];
  }
  int left[n];
  int right[n];
  
  left[0]=1;
  right[n-1]=1;
  for (int i = 1; i < n; i++)
  {
      if (a[i]>=a[i-1])
      {left[i]=left[i-1]+1;
      }
      else
      {
          left[i]=1;
          
      }
      
      
  }
  for (int i = n-2; i >=0; i--)
  {
      if(a[i]>=a[i+1])
      {
          right[i]=right[i+1]+1;
      }
      else
      {
          right[i]=1;
      }
  }
int u=0;
int y=0;
int maxi=INT_MIN;
for (int i = 0; i < n; i++)
{   int maxipre=maxi;
    maxi=max(left[i] + right[i] - 1,maxi);
    if (maxipre!=maxi)
    {
        u=i-(left[i]-1);
        y=i+(right[i]-1);
    }
}
for (int i = u; i <=y; i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
cout<<maxi<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t)
    {
        maxlengthbitonic();
        t--;
    }
    return 0;
}