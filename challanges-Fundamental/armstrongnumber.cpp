#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,prev;
    cin>>n;
    prev=n;
    int count =0;
    int ans=0;
    count = (n == 0) ? 1  : (log10(n) + 1);
    while (n>0)
    {
        ans= ans+ pow(n%10,count);
        n=n/10;
    }
    ans==prev? cout<<"true":cout<<"false";
    
    
    
    return 0;
}