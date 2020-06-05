//trailing zeroes in factorial
#include<iostream>
using namespace std;
void trail_zero(int n)
{
      int count=0;
    while (n/5!=0)
    {
        count = count+n/5;
        n=n/5;
    }
    cout<<count;
    
}
int main(){
    int n;
    cin>>n;
  trail_zero(n);
    return 0;
}