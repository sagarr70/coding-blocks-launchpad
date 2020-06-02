// code to print pattern n=5
          /*  1
             232
            34543
           4567654
          567898765 */
#include<iostream>
using namespace std;

int main(){
     int n;
     cin>>n;
for (int i = 1; i <= n; i++)
{   //spaces
    for (int j =n-i ; j >0; j--)
    {
        cout<<" ";
    }
    //increasing no.
    for (int k =i; k < i*2; k++)
    {
        cout<<k;
    }
    //decreasing no.
    for (int k = (i*2)-2; k>=i; k--)
    {
        cout<<k;
    }
    
    
    cout<<endl;
    
}




    return 0;
}