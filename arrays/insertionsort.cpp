#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
   for (int i = 1; i <=n-1; i++)
   {
       int key=a[i];
       int k=i;
       while (k>0 && a[k-1]>key)
       {
           a[k]=a[k-1];
           k--;
         
       }
       a[k]=key;
   }
}
int main(){
    int n;
    cin>>n;
    int a[1000]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    insertionsort(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}