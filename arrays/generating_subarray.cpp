#include<iostream>
using namespace std;
void subarray(int a[],int n)
{
   for (int i = 0; i < n; i++)
   {
       for (int j = i; j < n; j++)
       {
           for (int k = i; k <=j; k++)
           {
               cout<<a[k]<<",";
           }
           cout<<endl;
           
       }
       
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