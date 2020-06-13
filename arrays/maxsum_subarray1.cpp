#include<iostream>
#include<climits>
using namespace std;
void subarray(int a[],int n)
{  int maxsum=INT_MIN;
   int currsum=0;
   int start=-1;
   int end=-1;
   for (int i = 0; i < n; i++)
   {
       for (int j = i; j < n; j++)
       {
           for (int k = i; k <=j; k++)
           {
               currsum+=a[k];
           }
           if (currsum>maxsum)
           {
               maxsum=currsum;
               start=i;
               end=j;
           }
           currsum=0;
           
       }
       
   }
   cout<<maxsum<<endl;
   for (int i = start; i <=end; i++)
   {
       cout<<a[i]<<" ";
   }
   
   

}
int main(){
    int n;
    cin>>n;
    int a[100]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    subarray(a,n);
    return 0;
}