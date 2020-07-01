#include<iostream>
using namespace std;
/* 
  using integers
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
} */
//using string
#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string a,int start,int end)
{
     if (start>=end)
     {
        return true;
     }
     if (a.at(start)==a.at(end))
     {
         return ispalindrome(a,start+1,end-1);
     }
     return false;
}
int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    bool ans= ispalindrome(a,0,n-1);
    cout<<boolalpha<<ans;
    return 0;
}