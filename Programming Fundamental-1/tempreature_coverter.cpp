#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"enter temp in farenheight ";
    int f;
    cin>>f;
    float c;
    c = (5*(f-32))/9;
    cout<<fixed<<setprecision(2)<<c<<" celcius";
    return 0;
}