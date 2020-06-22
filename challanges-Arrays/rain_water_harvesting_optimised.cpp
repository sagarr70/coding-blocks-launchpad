#include<iostream>
#include<climits>
using namespace std;
//cannot create an array of size>10^5 in main will give segmentation fault, right and left are reserved keyword
int a[1000000];
int righ[1000000];
int lef[1000000];
int main(){
    int n;
    cin>>n;
    int max_left=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
       
    }
    for (int i = 0; i < n; i++)
    {
         max_left=max(max_left,a[i]);
        lef[i]=max_left;
    }
    
 
    max_left=INT_MIN;
   for (int i = n-1; i >=0; i--)
   {  max_left=max(max_left,a[i]);
      righ[i]=max_left;
   }
   int water=0;
   for (int i = 0; i < n; i++)
   {
       int mini=min(lef[i],righ[i]);
       water=water+(a[i]-mini);
   }
   cout<<abs(water);

    return 0;
}