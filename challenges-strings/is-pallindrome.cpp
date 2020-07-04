#include<iostream>
using namespace std;

bool ispalindrome(int a[],int start,int end)
{  //base case
   if (start>=end)
   {
       return true;
   }
   if (a[start]==a[end])
   {
      return  ispalindrome(a,start+1,end-1);
   }
   
       return false;
   
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<boolalpha<<ispalindrome(a,0,n-1);
    
    return 0;
} 
