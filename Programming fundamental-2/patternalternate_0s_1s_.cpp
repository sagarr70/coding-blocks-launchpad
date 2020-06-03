/* pattern problem
n=5
1
010
1010
01010
101010
 */
#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   for (int i =1; i <=n; i++)
   {
       if (i%2!=0)
       {   if (i==1)
           {
           cout<<"1";
           }
           else
           {
           for ( int k = 1; k <=i+1; k++)
           {
               if (k%2==0)
               {
                   cout<<"0";
               }
               else
               {
                   cout<<"1";
               }
           }   
           }
           cout<<endl;
       }
       else
       {
           for (int k = 1; k <=i+1; k++)
           {
               if (k%2==0)
               {
                   cout<<"1";
               }
               else
               {
                   cout<<"0";
               }
               
           }
           cout<<endl;
       }
       
   }
    return 0;
}