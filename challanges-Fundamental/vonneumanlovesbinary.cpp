#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int no;
    for (int i = 0; i < n; i++)
    { cin>>no;
      int ans=0;
      int k=0;
      while (no>0)
      {
          ans= ans + ((no%10)<<k);
          k++;
          no=no/10;
      }
      cout<<ans<<endl;
    }
    
    return 0;
}