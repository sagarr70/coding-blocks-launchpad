#include<iostream>
using namespace std;
void insertionsort(int a[], int n)
{

  for (int i = 1; i <n; i++)
  {
      int key =a[i];
      int k=i;
      while ( k>0&&a[k-1]>key)
      {
          a[k]=a[k-1];
          k--;
      }
      a[k]=key;
  }
}
bool binarysearch(int a[],int search,int start , int end)
{
    if (start>end)
    {   
        return false;
    }
    
     int mid= (start+end)/2;
         if (a[mid]==search)
         {   return true;
         }
         else
         {
             if (search>a[mid])
             {
              return  binarysearch(a,search,mid+1,end);
             }
             else
             {
                return binarysearch(a,search,start,mid-1);
             }
             
         }

}
int main(){
    int n;
    cin>>n;
    int a[n]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
   insertionsort(a,n);
      int search;
   cin>>search;
   bool ans=binarysearch(a,search,0,n-1);
   cout<<boolalpha<<ans;
    
    return 0;
}