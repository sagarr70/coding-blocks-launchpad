#include<iostream>
#include<math.h>
using namespace std;
//You've to calculate the reverse in a number, not just print the reverse.
int main(){
    int n;
    cin>>n;
    int count = n==0?1:(log10(n)+1);
    int rev=0;
    int m=pow(10,count-1);
  while (n>0)
 { 
        rev=rev+ (m*(n%10));
        m=m/10;
        n=n/10;
} 
    cout<<rev;

    return 0;
}