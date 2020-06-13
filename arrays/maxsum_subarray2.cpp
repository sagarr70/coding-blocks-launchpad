//cummulative sum approch
#include<iostream>
#include<climits>
using namespace std;
void subarray(int a[],int cumsum[],int n)
{  int maxsum=INT_MIN;
   int currsum=0;
   int start=-1;
   int end=-1;
   for (int i = 0; i < n; i++)
   {
       for (int j = i; j < n; j++)
       {
           currsum=cumsum[j]-cumsum[i-1];
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
    int cumsum[100]={0};
    cin>>a[0];
    cumsum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        cumsum[i]=cumsum[i-1]+a[i];
    }
    subarray(a,cumsum,n);
    return 0;
}