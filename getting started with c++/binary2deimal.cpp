#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int no;
    cin>>no;
    for (int k = 0; k < no; k++)
    {
     int n;
     cin>>n;        
    int decimal=0;
    int i=0;
    while (n>0)
    {
      int digit= n%10;
      decimal = decimal + digit*(pow(2,i));
      i+=1;
      n=n/10;
    }
    cout<<decimal<<endl;
    }   
    return 0;
}