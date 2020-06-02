#include<iostream>
using namespace std;
int main(){
    //program to find sum of nummbers from 1 to n
    int n;
    cin>>n;
    int i=1;
    int sum=0;
//method 1;
    /* while (i<=n)
    {
        sum+=i;
        i=i+1;
    }
    cout<<sum; */
 //method 2 formula : sum = n(n+1)/2
sum = (n*(n+1))/2;
cout<<sum;
return 0;
}