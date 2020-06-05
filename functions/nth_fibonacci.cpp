#include<iostream>
using namespace std;

void nth_fibonacci(long long int n)
{
    long long int a=0;
    long long int b=1;
    long long int c=0;
    for (int i = 1; i <=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
 
    }
    cout<<a;

}


int main(){
    long long int n;
    cin>>n;
    nth_fibonacci(n);
     
    return 0;
}