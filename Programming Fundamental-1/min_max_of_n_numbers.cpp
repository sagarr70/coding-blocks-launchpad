#include<iostream>
#include<climits>
using namespace std;

int main(){
   
   int n;
   cin>>n;
   int great=INT_MIN;
   int low= INT_MAX;
   for (int i = 0; i < n; i++)
   {
       int  no;
       cin>>no;
       if (no>great)
       {
           great=no;
       }
       if (no<low)
       {
           low=no;
       }
   }

   cout<<"greatest no. is "<<great<<endl;
   cout<<"lowest no is "<<low;
    return 0;
}