#include<iostream>
using namespace std;
void printallprime(int n)
{
   for (int i = 2; i <=n; i++)
   {    int flag=0;
       for (int k = 2; k<i; k++)
       {
           if (i%k==0)
           {
               flag=1;
               break;
           }
       }
       flag==0?cout<<i<<" ":cout<<"";
       
   }
}
int main(){
    int n;
    cin>>n;
    printallprime(n);
    

    return 0;
}