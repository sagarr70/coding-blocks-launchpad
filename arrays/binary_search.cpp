#include<iostream>
#include<algorithm>
using namespace std;
bool binarysearch(int a[],int start,int end,int search)
{  
  if (start>end)
  {
      return false;
  }
  int mid=(start+end)/2;
  if (search==a[mid])
  {
      return true;
  }
  else
  {
      if (search>a[mid])
      {
         return  binarysearch(a,mid+1,end,search);
                }
      else
      {
          return binarysearch(a,start,mid-1,search);
      }
      
  }
  
}
int main(){
    int n;
    int a[1000]={0};
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int key;
    cout<<"enter key"<<endl;
    cin>>key;
    bool ans=binarysearch(a,0,n-1,key);
    cout<<boolalpha<<ans;
    return 0;
}