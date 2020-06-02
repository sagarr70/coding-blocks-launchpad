#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag=0;
    for (int i = 2; i <n; i++)
    {
      if (n%i==0)
      {
         flag =1;
         break;  
      }
    }

    if (flag==0)
    {
      cout<<"prime no.";
    }
    else
    {
        cout<<"not a prime no.";
    }
    return 0;
}