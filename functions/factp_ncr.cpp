#include<iostream>
using namespace std;
int fact(int a)
{
   int ans=a;
   for (int i = 1; i <a; i++)
   {
       ans=ans*i;
   }
   return ans;
}
int ncr(int n, int r)
{
  int ans=fact(n)/((fact(n-r))*fact(r));
return ans; 

}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
    return 0;
}