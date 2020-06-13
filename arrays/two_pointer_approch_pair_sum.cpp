#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    cin>>sum;
   int i=0;
   int j=n-1;
   while (i<j)
   {
       if (a[i]+a[j]==sum)
       {
           cout<<a[i]<<","<<a[j]<<endl;
           i++;j--;
       }
       else
       {
           if (sum>a[i]+a[j])
           {
               j--;
           }
           else
           {
               i++;
           }
           
           
       }
       
       
   }
   


    return 0;
}